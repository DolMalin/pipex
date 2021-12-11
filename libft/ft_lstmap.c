/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:33:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/19 15:34:03 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*output;
	t_list	*buff;

	if (!lst)
		return (NULL);
	output = 0;
	while (lst)
	{	
		buff = ft_lstnew(f(lst->content));
		if (!buff)
		{
			ft_lstclear(&output, del);
			return (output);
		}
		lst = lst->next;
		ft_lstadd_back(&output, buff);
	}
	return (output);
}
