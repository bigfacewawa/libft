/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split only macro.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 00:33:55 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/31 00:39:53 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int 	num;
	int 	len;
	char	**str;

	i = 0;
	j = 0;
	num = ft_words_count(s, c);

	str = (char**)malloc((num + 1) * sizeof(char*));
	NULL_CHECK(!str);
	else if (num == 0)
	{
		str[0] = 0;
		return (str);
	}
	else
	{
		while (num--)
		{
			while (*(s + i) == c && *(s + i) != '\0')
			{
				i++;
			}
			len = ft_word_len((s + i), c);
			str[j] = ft_strsub((s + i), 0, len);
			NULL_CHECK(!str[j]);
			i = i + len;
			j++;
		}
		str[j] = '\0';
		return (str);
	}
}
