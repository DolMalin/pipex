/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:42:12 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/04 16:11:53 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	if (!dest && !src)
		return (0);
	i = 0;
	dest_c = dest;
	src_c = src;
	while (i < size)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}
