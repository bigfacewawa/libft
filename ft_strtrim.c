/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 21:06:47 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/30 01:33:12 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		len;
	int		j;

	NULL_CHECK(!s);
	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (ft_is_space(*(s + i)))
		i++;
	while (ft_is_space(*(s + len - 1)))
		len--;
	if (len - i > 0)
		str = (char*)ft_memalloc(len - i + 1);
	else
		str = (char*)ft_memalloc(1);
	NULL_CHECK(!str);
	while (j < len - i)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
