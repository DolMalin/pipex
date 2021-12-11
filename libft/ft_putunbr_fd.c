/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:07:36 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/16 10:09:58 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_fd(unsigned int nb, int fd)
{
	char		nb_char;

	nb_char = nb % 10 + '0';
	if (nb > 9)
		ft_putunbr_fd(nb / 10, fd);
	write(fd, &nb_char, 1);
}
