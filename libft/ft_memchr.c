/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:36:10 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/05 11:36:19 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int to_find, size_t size)
{
	size_t			i;
	unsigned char	*str_c;

	i = 0;
	str_c = (unsigned char *)str;
	while (i < size)
	{
		if (str_c[i] == (unsigned char)to_find)
			return (&str_c[i]);
		i++;
	}
	return (NULL);
}
