/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:18:00 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:18:01 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;

	srcptr = src;
	dstptr = dst;
	while (n > 0)
	{
		*dstptr = *srcptr;
		if (*srcptr == (unsigned char)c)
			return (++dstptr);
		n--;
		dstptr++;
		srcptr++;
	}
	return (NULL);
}
