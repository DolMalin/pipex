/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:05:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 16:23:53 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

t_bool	check_err(char **av, char **envp)
{
	int	err_code;

	err_code = check_exec_rights(av, envp);
	if (err_code == 0)
		return (true);
	else if (err_code == 1)
		err_msg("zsh: no such file or directory: ", av[1]);
	else if (err_code == 2)
		err_msg("zsh: permission denied: ", av[1]);
	else if (err_code == 3)
		err_msg("zsh: command not found: ", av[2]);
	else if (err_code == 4)
		err_msg("zsh: command not found: ", av[3]);
	else if (err_code == 5)
		err_msg("zsh: permission denied: ", av[4]);
	return (false);
}
