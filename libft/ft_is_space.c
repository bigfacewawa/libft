/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 02:52:32 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/28 02:52:34 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return ((c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}
