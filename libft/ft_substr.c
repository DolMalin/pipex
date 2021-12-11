/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:31:59 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/09 16:22:18 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*output;
	int		max_len;
	int		i;

	i = 0;
	if (!str || len == 0 || start > ft_strlen(str))
		return (ft_calloc(1, 1));
	if (ft_strlen(str) - start < len)
		max_len = ft_strlen(str) - start;
	else
		max_len = len;
	output = malloc(sizeof(char) * (max_len + 1));
	if (!output)
		return (NULL);
	ft_bzero(output, sizeof(char) * (max_len + 1));
	while (i < max_len)
	{
		output[i] = str[start + i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
