/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:51:54 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 14:51:56 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

t_cmd	*init_cmd(char **av, char **envp)
{
	t_cmd	*cmd;
	char	**temp;
	size_t	i;

	i = 0;
	cmd = malloc(sizeof(t_cmd));
	if (!cmd)
		return (NULL);
	temp = get_all_paths(envp);
	cmd->path1 = find_path(temp, av[2], X_OK);
	cmd->path2 = find_path(temp, av[3], X_OK);
	while (temp[i])
	{
		free(temp[i]);
		i++;
	}
	free(temp);
	return (cmd);
}
