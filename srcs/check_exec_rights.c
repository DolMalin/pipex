/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exec_rights.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:08:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/14 11:30:21 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	check_exec_rights(char **av, char **envp)
{
	int		output_code;
	t_cmd	*cmd;

	output_code = 0;
	cmd = init_cmd(av, envp);
	if (access(av[1], F_OK) == -1)
		output_code = 1;
	else if ((access(av[1], F_OK) == 0 && access(av[1], R_OK) == -1) || !av[1])
		output_code = 2;
	else if (!av[2][0])
		output_code = 3;
	else if (!cmd->path1 || !av[2])
		output_code = 4;
	else if (!av[3][0])
		output_code = 5;
	else if (!cmd->path2 || !av[3])
		output_code = 6;
	else if (!av[4][0])
		output_code = 7;
	else if ((access(av[4], F_OK) == 0 && access(av[4], W_OK) == -1) || !av[4])
		output_code = 8;
	clear_cmd(cmd);
	return (output_code);
}
