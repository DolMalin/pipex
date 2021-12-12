/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exec_rights.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:08:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 14:26:41 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

int	check_exec_rights(char **av, char **envp)
{
	int		output_code;
	size_t	i;
	t_data	*data;

	i = 0;
	output_code = 0;
	data = init_path(av, envp);
	if (access(av[1], F_OK) == -1 || !av[1])
		output_code = 1;
	else if ((access(av[1], F_OK) == 0 && access(av[1], R_OK) == -1) || !av[1])
		output_code = 2;
	else if (!data->path1 || !av[2])
		output_code = 3;
	else if (!data->path2 || !av[3])
		output_code = 4;
	else if (access(av[4], F_OK) == -1 || !av[4])
		output_code = 5;
	else if ((access(av[4], F_OK) == 0 && access(av[4], W_OK) == -1) || !av[4])
		output_code = 6;
	clear_path(data);
	return (output_code);
}
