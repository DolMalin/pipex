/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:04:21 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 17:33:11 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	err_msg(const char *msg, const char *filename)
{
	ft_putstr_fd(msg, 2);
	ft_putstr_fd(filename, 2);
	ft_putstr_fd("\n", 2);
}
