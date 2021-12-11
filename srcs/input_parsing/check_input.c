/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:09:13 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/11 16:24:08 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"
#include "stdio.h"

void	check_input(int ac, char **av, char **envp)
{
	int		output_code;

	if (ac != 5)
		exit(EXIT_FAILURE);
	output_code = check_exec_rights(av, envp);
	if (output_code == 0)
		printf("Tout est bon fdep\n\n");
	if (output_code == 1)
		printf("File1 n'existe pas\n\n");
	if (output_code == 2)
		printf("File1 n'a pas les droits\n\n");
	if (output_code == 3)
		printf("CMD 1 n'existe pas\n\n");
	if (output_code == 4)
		printf("CMD 2 n'existe pas\n\n");
	if (output_code == 5)
		printf("File2 n'existe pas\n\n");
	if (output_code == 6)
		printf("File2 n'a pas les droits\n\n");
}
