/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:37:32 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/11 13:46:15 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

/* ============== ~ INCLUDES ~ ============== */
#include "../../libft/libft.h"
#include <unistd.h>

/* ============== ~ DEFINES ~ ============== */
typedef	enum
{
	false, 
	true 
}		e_bool;

/* ============== ~ INPUT PARSING ~ ============== */
void	check_input(int ac, char **av, char **envp);
char	*get_all_paths(char **envp);

#endif