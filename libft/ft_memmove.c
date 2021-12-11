/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:47:07 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/04 16:11:56 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	i = 0;
	dest_c = dest;
	src_c = src;
	if (src < dest)
	{
		while (i < size)
		{
			dest_c[size - i - 1] = src_c[size - i - 1];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
