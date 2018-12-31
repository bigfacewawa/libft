/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 20:39:42 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/28 20:39:43 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{

    if (alst != NULL && (*alst) != NULL)
	{
		if ((*alst)->content != NULL)
    	{
        	del((*alst)->content, (*alst)->content_size);
        	(*alst)->next = NULL;
        	free(*alst);
			(*alst) = NULL;
    	}
	}
}
