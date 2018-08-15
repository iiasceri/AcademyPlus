/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:18:08 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:18:08 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1ptr;
	const unsigned char *s2ptr;

	s1ptr = s1;
	s2ptr = s2;
	if (n == 0)
		return (0);
	while (n > 1 && *s1ptr == *s2ptr)
	{
		s1ptr++;
		s2ptr++;
		n--;
	}
	return (*s1ptr - *s2ptr);
}
