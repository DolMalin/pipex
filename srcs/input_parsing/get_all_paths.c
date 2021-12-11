/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_all_paths.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:40:56 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/11 13:46:39 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

char	*get_all_paths(char **envp)
{
	size_t	i;

	i = -1;
	while (envp[++i] && ft_strncmp(envp[i], "PATH=", 5));
	return (envp[i]);
}
