/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:02:01 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 17:43:34 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

static void	child_process(char **envp, char **av, int end[2], t_cmd *cmd)
{
	int		fd;
	char	**cmd_flagless;

	fd = open(av[1], O_RDONLY);
	cmd_flagless = ft_split(av[2], ' ');
	if (fd == -1 || !cmd_flagless)
	{
		clear_cmd(cmd);
		exit(EXIT_FAILURE);
	}
	dup2(fd, STDIN_FILENO);
	dup2(end[1], STDOUT_FILENO);
	close(end[0]);
	execve(cmd->path1, cmd_flagless, envp);
	close(fd);
	clear_cmd(cmd);
	free_doublechar(cmd_flagless);
	exit(EXIT_SUCCESS);
}

static void	parent_process(char **envp, char **av, int end[2], t_cmd *cmd)
{
	int		fd;
	char	**cmd_flagless;

	fd = open(av[4], O_WRONLY | O_CREAT, 0666);
	cmd_flagless = ft_split(av[3], ' ');
	if (fd == -1 || !cmd_flagless)
	{
		clear_cmd(cmd);
		exit(EXIT_FAILURE);
	}
	dup2(fd, STDOUT_FILENO);
	dup2(end[0], STDIN_FILENO);
	close(end[1]);
	execve(cmd->path2, cmd_flagless, envp);
	clear_cmd(cmd);
	exit(EXIT_SUCCESS);
}

static void	pipex(char **av, char **envp)
{
	t_cmd	*cmd;
	int		end[2];
	int		pid;

	cmd = init_cmd(av, envp);
	pipe(end);
	pid = fork();
	if (pid > 0)
		child_process(envp, av, end, cmd);
	else if (waitpid(pid, 0, 0) == -1)
		parent_process(envp, av, end, cmd);
}

int	main(int ac, char **av, char **envp)
{
	check_input(ac, av, envp);
	pipex(av, envp);
	return (0);
}
