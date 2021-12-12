/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:37:32 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 14:25:03 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

/* ============== ~ INCLUDES ~ ============== */
# include "../../libft/libft.h"
# include <unistd.h>

/* ============== ~ DEFINES ~ ============== */
typedef enum e_bool
{
	false,
	true
}			t_bool;

typedef struct s_data
{
	char	**paths;
	char	*path1;
	char	*path2;
}			t_data;

/* ============== ~ INPUT PARSING ~ ============== */
void	check_input(int ac, char **av, char **envp);
int		check_exec_rights(char **av, char **envp);
t_bool	check_err(char **av, char **envp);
void	err_msg(const char *msg, const char *filename);
char	**get_all_paths(char **envp);
char	*find_path(char	**paths, char *cmd, int flag);
void	clear_path(t_data *path);
t_data	*init_path(char **av, char **envp);

#endif