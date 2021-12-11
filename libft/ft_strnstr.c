/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:25:10 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/05 13:44:01 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (ft_strlen(to_find) < 1)
		return ((char *)str);
	while (str[i] && i < size)
	{
		k = i;
		j = 0;
		while (str[k] == to_find[j] && k < size)
		{
			if (to_find[j + 1] == 0)
				return ((char *)&str[i]);
			j++;
			k++;
		}
		i++;
	}
	return (0);
}
