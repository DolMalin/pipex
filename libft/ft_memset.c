/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:52:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/04 16:11:41 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = ptr;
	while (i < size)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
