/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:45:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/09 16:28:32 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strtrimlen(char const *str, char const *charset)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (str[i] && ft_ischarset(str[i], charset))
	{
		count++;
		i++;
	}
	i = 0;
	while (i < len && count < len && ft_ischarset(str[len - i - 1], charset))
	{
		count ++;
		i++;
	}
	return (len - count);
}

char	*ft_strtrim(char const *str, char const *charset)
{
	char	*output;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	len = ft_strtrimlen(str, charset);
	output = malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	while (str[i] && ft_ischarset(str[i], charset))
		i++;
	while (str[i] && j < len)
	{
		output[j] = str[i];
		i++;
		j++;
	}
	output[j] = '\0';
	return (output);
}
