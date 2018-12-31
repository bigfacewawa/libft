/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 20:39:25 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/28 20:39:27 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    if (alst && (*alst))
    {
        if ((*alst)->content)
        {
            del((*alst)->content, (*alst)->content_size);
            free(*alst);
            *alst = (*alst)->next;
        }
        else
        {
			free((*alst));
            *alst = (*alst)->next;
        }
        ft_lstdel(alst, del);
    }
}
