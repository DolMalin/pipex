/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exec_rights.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:08:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 11:11:33 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

int	check_exec_rights(char **av, char **envp)
{
	char	**paths;
	char	*path1;
	char	*path2;
	int		output_code;
	size_t	i;

	i = 0;
	paths = get_all_paths(envp);
	path1 = find_path(paths, av[2], X_OK);
	path2 = find_path(paths, av[3], X_OK);
	output_code = 0;
	if (access(av[1], F_OK) == -1 || !av[1])
		output_code = 1;
	else if ((access(av[1], F_OK) == 0 && access(av[1], R_OK) == -1) || !av[1])
		output_code = 2;
	else if (!path1 || !av[2])
		output_code = 3;
	else if (!path2 || !av[3])
		output_code = 4;
	else if (access(av[4], F_OK) == -1 || !av[4])
		output_code = 5;
	else if ((access(av[4], F_OK) == 0 && access(av[4], W_OK) == -1) || av[4])
		output_code = 6;
	pathsclear(paths, path1, path2);
	return (output_code);
}
