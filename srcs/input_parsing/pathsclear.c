/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pathsclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:27:25 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/11 16:25:54 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

void	pathsclear(char **paths, char *path1, char *path2)
{
	size_t	i;

	i = 0;
	while (paths[i])
	{
		free(paths[i]);
		i++;
	}
	free(paths);
	if (path1)
		free(path1);
	if (path2)
		free(path2);
}
