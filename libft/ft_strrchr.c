/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:11:16 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/05 11:11:34 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	size_t			i;
	unsigned char	to_find_c;

	i = ft_strlen((char *)str);
	to_find_c = (unsigned char)to_find;
	while (i > 0)
	{
		if (str[i] == to_find_c)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == to_find_c)
		return ((char *)str + i);
	return (NULL);
}
