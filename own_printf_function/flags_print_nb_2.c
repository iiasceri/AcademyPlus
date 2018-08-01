/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_print_nb_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:14:27 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:14:28 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		flags_print_oo(va_list args)
{
	char *str;

	str = (char *)malloc(sizeof(char));
	str = ft_itoa_base_ulli((ULLI)va_arg(args, LLI), 8);
	if (str[0] == '\0')
		str = "0";
	return (print_nr_print(str));
}

int		flags_print_nb_u(va_list args, char c)
{
	char *str;

	str = (char *)malloc(sizeof(char));
	if (c == 'L')
		str = ft_itoa_base_ulli(va_arg(args, ULLI), 10);
	else if (c == 'l')
		str = ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 10);
	else if (c == 'h')
		str = ft_itoa_base_ulli((ULLI)(unsigned short)va_arg(args, int), 10);
	else if (c == 'H')
		str = ft_itoa_base((int)(unsigned char)va_arg(args, int), 10);
	else if (c == 'z')
		str = ft_itoa_base_s((size_t)va_arg(args, ULLI), 10);
	else if (c == 'j')
		str = ft_itoa_base_it((intmax_t)va_arg(args, LLI), 10);
	if (str[0] == '\0')
		str = "0";
	return (print_nr_print(str));
}

int		flags_print_nb_uu(va_list args, char c)
{
	char *str;

	str = (char *)malloc(sizeof(char));
	if (c == 'L')
		str = ft_itoa_base_ulli(va_arg(args, ULLI), 10);
	else if (c == 'l')
		str = ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 10);
	else if (c == 'h')
		str = ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 10);
	else if (c == 'H')
		str = ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 10);
	else if (c == 'z')
		str = ft_itoa_base_s((size_t)va_arg(args, ULLI), 10);
	else if (c == 'j')
		str = ft_itoa_base_it((intmax_t)va_arg(args, LLI), 10);
	if (str[0] == '\0')
		str = "0";
	return (print_nr_print(str));
}

int		flags_put_n(va_list args, char c)
{
	if (c == 'L')
		*va_arg(args, ULLI *) = g_put_nr;
	else if (c == 'l')
		*va_arg(args, LLI *) = g_put_nr;
	else if (c == 'h')
		*va_arg(args, short int *) = (short int)g_put_nr;
	else if (c == 'H')
		*va_arg(args, signed char *) = (signed char)g_put_nr;
	else if (c == 'l')
		*va_arg(args, long int *) = (long int)g_put_nr;
	else if (c == 'L')
		*va_arg(args, LLI *) = (LLI)g_put_nr;
	else if (c == 'j')
		*va_arg(args, intmax_t *) = (intmax_t)g_put_nr;
	else if (c == 'z')
		*va_arg(args, size_t *) = (size_t)g_put_nr;
	return (0);
}
