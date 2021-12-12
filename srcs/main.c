/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:02:01 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 16:54:21 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

static void	child_process(char **envp, char **av, int end[2], t_cmd *cmd)
{
	int	fd;

	fd = open(av[1], O_RDONLY);
	dup2(fd, STDIN_FILENO);
	dup2(end[1], STDOUT_FILENO);
	close(end[0]);
	execve(cmd->path1, ft_split(av[2], ' '), envp);
	close(fd);
	exit(EXIT_FAILURE);
}

static void	parent_process(char **envp, char **av, int end[2], t_cmd *cmd)
{
	int	fd;

	fd = open(av[4], O_WRONLY | O_CREAT, 0666);
	dup2(fd, STDOUT_FILENO);
	dup2(end[0], STDIN_FILENO);
	close(end[1]);
	execve(cmd->path2, ft_split(av[3], ' '), envp);
	exit(EXIT_FAILURE);
}

static void	pipex(int ac, char **av, char **envp)
{
	t_cmd	*cmd;
	int		fd;
	int		end[2];
	int		pid;

	cmd = init_cmd(av, envp);
	pipe(end);
	pid = fork();
	if (pid > 0)
		child_process(envp, av, end, cmd);
	else if (waitpid(pid, 0, 0) == -1)
		child_process(envp, av, end, cmd);
}

int	main(int ac, char **av, char **envp)
{
	check_input(ac, av, envp);
	pipex(ac, av, envp);
}
