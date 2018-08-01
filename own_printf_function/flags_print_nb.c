/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_print_nb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:13:35 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:13:38 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		flags_print_nb(va_list args, char c)
{
	char *str;

	str = (char *)malloc(sizeof(char));
	if (c == 'L')
		str = ft_itoa_base_lli(va_arg(args, LLI), 10);
	else if (c == 'l')
		str = ft_itoa_base_lli(va_arg(args, LLI), 10);
	else if (c == 'h')
		str = ft_itoa_base((int)(short int)va_arg(args, int), 10);
	else if (c == 'H')
		str = ft_itoa_base((int)(signed char)va_arg(args, int), 10);
	else if (c == 'z')
		str = ft_itoa_base_lli(va_arg(args, LLI), 10);
	else if (c == 'j')
		str = ft_itoa_base_lli((LLI)va_arg(args, intmax_t), 10);
	if (str[0] == '\0')
		str = "0";
	return (print_nr_print(str));
}

int		flags_print_x(va_list args, char c)
{
	char *str;

	str = (char *)malloc(sizeof(str));
	if (c == 'L')
		str = ft_itoa_base_ulli(va_arg(args, ULLI), 16);
	else if (c == 'l')
		str = ft_itoa_base_ulli((ULLI)va_arg(args, LLI), 16);
	else if (c == 'h')
		str = ft_itoa_base((int)(unsigned short int)va_arg(args, int), 16);
	else if (c == 'H')
		str = ft_itoa_base((int)(unsigned char)va_arg(args, int), 16);
	else if (c == 'z')
		str = ft_itoa_base_s((size_t)va_arg(args, ULLI), 16);
	else if (c == 'j')
		str = ft_itoa_base_it(va_arg(args, intmax_t), 16);
	if (str[0] == '\0')
		str = "0";
	return (print_nr_print(str));
}

int		flags_print_xx(va_list args, char c)
{
	char *str;

	str = (char *)malloc(sizeof(str));
	if (c == 'L')
		str = ft_mari(ft_itoa_base_ulli(va_arg(args, ULLI), 16));
	else if (c == 'l')
		str = ft_mari(ft_itoa_base_ulli((ULLI)va_arg(args, LLI), 16));
	else if (c == 'h')
		str = ft_mari(ft_itoa_base((int)(unsigned short)va_arg(args, int), 16));
	else if (c == 'H')
		str = ft_mari(ft_itoa_base((int)(unsigned char)va_arg(args, int), 16));
	else if (c == 'z')
		str = ft_mari(ft_itoa_base_s((size_t)va_arg(args, ULLI), 16));
	else if (c == 'j')
		str = ft_mari(ft_itoa_base_it((intmax_t)va_arg(args, LLI), 16));
	if (str[0] == '\0')
		str = "0";
	return (print_nr_print(str));
}

int		flags_print_o(va_list args, char c)
{
	char *str;

	str = (char *)malloc(sizeof(str));
	if (c == 'L')
		str = ft_itoa_base_ulli(va_arg(args, ULLI), 8);
	else if (c == 'l')
		str = ft_itoa_base_ulli((ULLI)va_arg(args, LLI), 8);
	else if (c == 'h')
		str = ft_itoa_base((int)(unsigned short)va_arg(args, int), 8);
	else if (c == 'H')
		str = ft_itoa_base((int)(unsigned char)va_arg(args, int), 8);
	else if (c == 'z')
		str = ft_itoa_base_s((size_t)va_arg(args, ULLI), 8);
	else if (c == 'j')
		str = ft_itoa_base_it((intmax_t)va_arg(args, LLI), 8);
	if (str[0] == '\0')
		str = "0";
	return (print_nr_print(str));
}
