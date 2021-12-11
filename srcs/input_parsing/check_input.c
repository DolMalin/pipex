/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:09:13 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/11 14:53:26 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"
#include "stdio.h"

void	check_input(int ac, char **av, char **envp)
{
	if (ac != 5)
		exit(EXIT_FAILURE);
}
