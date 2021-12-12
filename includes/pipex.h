/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:37:32 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/12 18:00:51 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

/* ============== ~ INCLUDES ~ ============== */
# include "../../libft/libft.h"
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/* ============== ~ DEFINES ~ ============== */
typedef enum e_bool
{
	false,
	true
}			t_bool;

typedef struct s_cmd
{
	char	*path1;
	char	*path2;
}			t_cmd;

/* ============== ~ PROTOTYPES ~ ============== */
int		check_exec_rights(char **av, char **envp);
void	check_err(char **av, char **envp);
void	err_msg(const char *msg, const char *filename);
char	**get_all_paths(char **envp);
char	*find_path(char	**paths, char *cmd);
void	clear_cmd(t_cmd *cmd);
t_cmd	*init_cmd(char **av, char **envp);
void	free_doublechar(char **arr);

#endif