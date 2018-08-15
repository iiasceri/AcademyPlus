/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:35:00 by iiasceri          #+#    #+#             */
/*   Updated: 2018/04/02 12:35:01 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(void)
{
	write(1, AC_R, 5);
	write(1, "Error\n", 6);
	write(1, AC_RES, 4);
	exit(0);
}

void	ft_putstr(char const *s)
{
	int i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*((char*)dest + i) = *((char*)src + i);
		i++;
	}
	return ((void*)dest);
}
