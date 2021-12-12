/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:51:15 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 14:51:17 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

void	clear_cmd(t_cmd *cmd)
{
	if (cmd->path1)
		free(cmd->path1);
	if (cmd->path2)
		free(cmd->path2);
	free(cmd);
}
