/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:01:51 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/05 13:02:14 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	size_t			i;
	unsigned char	*str1_c;
	unsigned char	*str2_c;

	i = 0;
	str1_c = (unsigned char *)str1;
	str2_c = (unsigned char *)str2;
	while (i < size)
	{
		if (str1_c[i] != str2_c[i])
			return (str1_c[i] - str2_c[i]);
		i++;
	}
	return (0);
}
