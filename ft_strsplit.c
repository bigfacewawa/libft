/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 07:04:02 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/30 02:01:26 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		num;
	int		len;

	i = 0;
	j = 0;
	num = ft_words_count(s, c);
	str = (char**)malloc((num + 1) * sizeof(char*));
	NULL_CHECK(!str);
	if (num == 0)
		return (ft_zero_str(str));
	while (num--)
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		len = ft_word_len((s + i), c);
		str[j] = ft_strsub((s + i), 0, len);
		NULL_CHECK(!str[j]);
		i = i + len;
		j++;
	}
	str[j] = NULL;
	return (str);
}
