/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:27:39 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/08 12:27:40 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*output;
	size_t	len;
	size_t	i;

	i = 0;
	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen((char *)str1) + ft_strlen((char *)str2);
	output = malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	while (i < len)
	{
		if (i < ft_strlen((char *)str1))
			output[i] = str1[i];
		else
			output[i] = str2[i - ft_strlen((char *)str1)];
		i++;
	}
	output[i] = '\0';
	return (output);
}
