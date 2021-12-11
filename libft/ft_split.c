/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:27:32 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/09 12:00:38 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_arraylen(const char *str, char c)
{
	size_t	i;
	size_t	count;
	size_t	letter_count;

	i = 0;
	count = 0;
	letter_count = 0;
	while (str[i])
	{
		if (str[i] != c)
			letter_count++;
		else if (letter_count > 0)
		{
			count++;
			letter_count = 0;
		}
		i++;
	}
	if (letter_count > 0)
		return (++count);
	return (count);
}

static char	*ft_nextstr(const char *str, char c)
{
	size_t		i;
	size_t		count;
	char		*save_str;

	i = 0;
	count = 0;
	while (str[i] && str[i] != c)
	{
		i++;
		count++;
	}
	save_str = malloc(sizeof(char) * (i + 1));
	if (!save_str)
		return (NULL);
	i = 0;
	while (i < count)
	{
		save_str[i] = str[i];
		i++;
	}
	save_str[i] = '\0';
	return (save_str);
}

char	**ft_split(const char *str, char c)
{
	char	**out;
	char	*substr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	out = malloc((ft_arraylen(str, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	while (j < ft_arraylen(str, c))
	{
		while (str[i] == c)
			i++;
		substr = ft_nextstr(&str[i], c);
		if (!substr)
			return (NULL);
		out[j] = substr;
		i += ft_strlen(substr);
		j++;
	}
	out[j] = 0;
	return (out);
}
