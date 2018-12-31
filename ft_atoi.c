/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:05:42 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/28 12:41:58 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;

	/*\n:new line
	 *\r:return & to the next line,it has the same effect as \n
	 *\v:vertical竖向跳格
	 *\f:走纸换页:针对打印机输出时的命令符，表示按当前打印机的设置跳过一页纸，换到下页*/

	while (is_space(*(str + i)))
	{
		i++;
	}
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		if (num > 469762049 && sign == 1)
			return (-1);
		else if (num > 469762049 && sign == -1)
			return (0);
	num = num * 10 + (*(str + i) - '0');
	i++;
	}
	return ((int)num * sign);
}
