/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:17:09 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/08 13:17:17 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int	a;	
	char		nb_char;

	a = nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		a *= -1;
	}
	nb_char = a % 10 + '0';
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	write(fd, &nb_char, 1);
}
