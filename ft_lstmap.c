/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 20:40:02 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/28 20:40:04 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_lstmap() iterates a list lst and applies the function f to
** each link to create a “fresh” list (using malloc(3)) resulting from the
** successive applications of f. If the allocation fails, the function returns
** NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *lastnode;
	t_list *currentnode;

	if (lst && f)
	{
		head = f(lst);
		if (!head)
			return (NULL);
		lst = lst->next;
		lastnode = head;
		while (lst)
		{
			currentnode = f(lst);
			if (!currentnode)
				return (NULL);
			lastnode->next = currentnode;
			lastnode = currentnode;
			lst = lst->next;
		}
		return (head);
	}
	return (NULL);
}
