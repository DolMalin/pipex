/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:25:22 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 14:25:41 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

t_data	*init_path(char **av, char **envp)
{
	t_data	*data;	

	data = malloc(sizeof(t_data));
	if (!data)
		return (NULL);
	data->paths = get_all_paths(envp);
	data->path1 = find_path(data->paths, av[2], X_OK);
	data->path2 = find_path(data->paths, av[3], X_OK);
	return (data);
}
