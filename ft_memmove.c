/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 22:04:18 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/18 20:01:48 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *ret = dst;
   if (dst <= src || dst >= src + len)
   {  // 若dst和src区域没有重叠，则从起始处开始逐一拷贝
      while (len--)
      {
         *(char*)dst = *(char*)src;
         dst = dst + 1;
         src = src + 1;
      }
   }
   else
   {  // 若dst和src 区域交叉，则从尾部开始向起始位置拷贝，这样可以避免数据冲突
      dst = dst + len - 1;
      src = src + len - 1;
      while (len--)
      {
         *(char*)dst = *(char*)src;
         dst = dst - 1;
         src = src - 1;
      }
   }
   return(ret);
}
