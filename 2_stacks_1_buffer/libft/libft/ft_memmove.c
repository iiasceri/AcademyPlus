/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:18:19 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:18:19 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*dstptr;

	dstptr = dst;
	if (dst > src)
		while (len > 0)
		{
			len--;
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
		}
	else if (dst < src)
		while (len > 0)
		{
			len--;
			*((unsigned char *)dst) = *((unsigned char *)src);
			dst++;
			src++;
		}
	return (dstptr);
}
