/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:51:54 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 17:33:22 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

t_cmd	*init_cmd(char **av, char **envp)
{
	t_cmd	*cmd;
	char	**temp;
	char	**temp_path;

	cmd = malloc(sizeof(t_cmd));
	if (!cmd)
		exit(EXIT_FAILURE);
	temp = get_all_paths(envp);
	temp_path = ft_split(av[2], ' ');
	cmd->path1 = find_path(temp, temp_path[0]);
	free_doublechar(temp_path);
	temp_path = ft_split(av[3], ' ');
	cmd->path2 = find_path(temp, temp_path[0]);
	free_doublechar(temp_path);
	free_doublechar(temp);
	return (cmd);
}
