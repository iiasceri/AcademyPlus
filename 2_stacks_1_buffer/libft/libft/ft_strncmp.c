/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:21:25 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:21:26 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *s1ptr;
	const unsigned char *s2ptr;

	s1ptr = (unsigned char*)s1;
	s2ptr = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (*s1ptr != *s2ptr)
			return (*s1ptr - *s2ptr);
		else if (*s1ptr == '\0')
			return (0);
		s1ptr++;
		s2ptr++;
	}
	return (0);
}
