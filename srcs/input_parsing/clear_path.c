/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:05:53 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 14:19:24 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

void	clear_path(t_data *data)
{
	size_t	i;

	i = 0;
	while (data->paths[i])
	{
		free(data->paths[i]);
		i++;
	}
	free(data->paths);
	if (data->path1)
		free(data->path1);
	if (data->path2)
		free(data->path2);
	free(data);
}
