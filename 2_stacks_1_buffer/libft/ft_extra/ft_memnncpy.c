/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memnncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:51:55 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 14:51:55 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void		*ft_memnncpy(void *dst, const void *src, size_t start, size_t n)
{
	size_t	i;

	i = 0;
	while (i < start && *(unsigned char*)src != '\0')
	{
		src++;
		i++;
	}
	return (ft_memcpy(dst, src, n));
}
