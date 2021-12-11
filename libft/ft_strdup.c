/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:06:06 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/05 15:06:31 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*copy_str;

	i = 0;
	copy_str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy_str)
		return (0);
	while (src[i])
	{
		copy_str[i] = src[i];
		i++;
	}
	copy_str[i] = '\0';
	return (copy_str);
}
