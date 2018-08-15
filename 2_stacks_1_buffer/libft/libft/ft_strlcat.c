/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:21:03 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:21:04 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	length;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size < dstlen)
		length = size + srclen;
	else
		length = dstlen + srclen;
	dst = dst + dstlen;
	dstlen += 1;
	while (dstlen < size && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		dstlen++;
	}
	*dst = '\0';
	return (length);
}
