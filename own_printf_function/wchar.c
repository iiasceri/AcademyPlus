/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:09:29 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:09:35 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putwchar_f(u_int32_t ch)
{
	int nr;

	nr = 0;
	if (ch < 128)
		nr += ft_putchar_f(ch);
	else if (ch < 2048)
	{
		nr += ft_putchar_f((ch >> 6) | 0xC0);
		nr += ft_putchar_f((ch & 0x3F) | 0x80);
	}
	else if (ch < 65536)
	{
		nr += ft_putchar_f((ch >> 12) | 0xE0);
		nr += ft_putchar_f(((ch >> 6) & 0x3F) | 0x80);
		nr += ft_putchar_f((ch & 0x3F) | 0x80);
	}
	else if (ch < 1114112)
	{
		nr += ft_putchar_f((ch >> 18) | 0xF0);
		nr += ft_putchar_f(((ch >> 12) & 0x3F) | 0x80);
		nr += ft_putchar_f(((ch >> 6) & 0x3F) | 0x80);
		nr += ft_putchar_f((ch & 0x3F) | 0x80);
	}
	return (nr);
}

int		ft_putsstr_f(u_int32_t *s)
{
	int nr;

	nr = 0;
	while (*s)
		nr += ft_putwchar_f(*s++);
	return (nr);
}
