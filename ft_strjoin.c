/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 20:55:24 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/29 22:57:32 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	while ((i - ft_strlen(s1)) < ft_strlen(s2))
	{
		*(str + i) = *(s2 + j);
		i++;
		j++;
	}
	return (str);
}
