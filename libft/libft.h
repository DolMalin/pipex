/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:36:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/22 11:37:32 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* =============== LIB =============== */
# include <stdlib.h>
# include <unistd.h>

/* =============== STRUCTURES =============== */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/* =============== PART 1 - LIBC FUNCTIONS =============== */

/* =============== STRINGS ===============*/
size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *src);
int			ft_strncmp(const char *str1, const char *str2, size_t length);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strnstr(const char *str, const char *to_find, size_t size);
char		*ft_strchr(const char *str, int to_find);
char		*ft_strrchr(const char *str, int to_find);
int			ft_atoi(const char *str);
long long	ft_atoll(const char *str);
/* =============== CHAR ===============*/
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/* =============== MEMORY ===============*/
void		*ft_memset(void *ptr, int c, size_t size);
void		ft_bzero(void *ptr, size_t size);
void		*ft_memcpy(void *dest, const void *src, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t size);
void		*ft_memchr(const void *str, int to_find, size_t size);
int			ft_memcmp(const void *str1, const void *str2, size_t size);
void		*ft_calloc(size_t elem_count, size_t elem_size);

/* =============== PART 2 - ADDITIONALS FUNCTIONS =============== */

/* =============== STRINGS ===============*/
void		ft_striteri(char *str, void (*f)(unsigned int, char *));
char		*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int			ft_strequ(char const *str1, char const *str2);
int			ft_strnequ(char const *str1, char const *str2, size_t size);
char		*ft_substr(char const *str, unsigned int start, size_t len);
char		*ft_strjoin(char const *str1, char const *str2);
char		*ft_strtrim(char const *str, char const *charset);
char		**ft_split(const char *str, char c);
char		*ft_itoa(int nb);

/* =============== PUT ===============*/
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *str, int fd);
void		ft_putendl_fd(char const *str, int fd);
void		ft_putnbr_fd(int nb, int fd);
void		ft_putunbr_fd(unsigned int nb, int fd);

/* =============== PART 3 - BONUS =============== */
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **alst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif                                         
