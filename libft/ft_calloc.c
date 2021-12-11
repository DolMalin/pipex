/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:52:39 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/05 14:58:20 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elem_count, size_t elem_size)
{
	char	*output;

	output = malloc(elem_size * elem_count);
	if (!output)
		return (NULL);
	ft_bzero(output, elem_size * elem_count);
	return (output);
}
