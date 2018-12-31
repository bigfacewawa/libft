/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 21:06:47 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/27 19:26:03 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *str;
	int i;
	int len;
	int j;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (ft_is_space(*(s + i)))
	{
		i++;
	}
	while (ft_is_space(*(s + len - 1)))
	{
		len--;
	}
	if (len - i > 0)
	{
		str = (char*)ft_memalloc(len - i + 1);
	}
	else
	{
		str = (char*)ft_memalloc(1);
	}
	if (!str)
	{
			return (NULL);
	}
	while (j < len - i)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
