/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:11:03 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:11:05 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		flags_minus_z(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_minus_nr(ft_itoa_base_s(
						(size_t)va_arg(args, ULLI), 10), 'n'));
	else if (c == 'u')
		return (print_minus_nr(ft_itoa_base_s(
						(size_t)va_arg(args, ULLI), 10), 'n'));
	else if (c == 'p')
		return (print_minus_nr(ft_itoa_base_s(
						(size_t)va_arg(args, ULLI), 10), 'n'));
	else if (c == 'x')
		return (print_minus_nr(ft_itoa_base_s(
						(size_t)va_arg(args, ULLI), 16), 'n'));
	else if (c == 'X')
		return (print_minus_nr(ft_mari(ft_itoa_base_s(
							(size_t)va_arg(args, ULLI), 16)), 'n'));
	else if (c == 'o' || c == 'O')
		return (print_minus_nr(ft_itoa_base_s((size_t)
						va_arg(args, ULLI), 8), 'n'));
		return (0);
}

int		flags_minus_j(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_minus_nr(ft_itoa_base_it(
						(intmax_t)va_arg(args, ULLI), 10), 'n'));
	else if (c == 'u')
		return (print_minus_nr(ft_itoa_base_it(
						(intmax_t)va_arg(args, ULLI), 10), 'n'));
	else if (c == 'p')
		return (print_minus_nr(ft_itoa_base_it(
						(intmax_t)va_arg(args, ULLI), 10), 'n'));
	else if (c == 'x')
		return (print_minus_nr(ft_itoa_base_it(
						(intmax_t)va_arg(args, ULLI), 16), 'n'));
	else if (c == 'X')
		return (print_minus_nr(ft_mari(ft_itoa_base_it((intmax_t)
							va_arg(args, ULLI), 16)), 'n'));
	else if (c == 'o' || c == 'O')
		return (print_minus_nr(ft_itoa_base_it((intmax_t)
						va_arg(args, ULLI), 8), 'n'));
		return (0);
}

int		flags_plus_z(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_plus_nr(ft_itoa_base_s((size_t)va_arg(args, ULLI), 10)));
	else if (c == 'u')
		return (print_plus_nr(ft_itoa_base_s((size_t)va_arg(args, ULLI), 10)));
	else if (c == 'p')
		return (print_plus_nr(ft_itoa_base_s((size_t)va_arg(args, ULLI), 10)));
	else if (c == 'x')
		return (print_plus_nr(ft_itoa_base_s((size_t)va_arg(args, ULLI), 16)));
	else if (c == 'X')
		return (print_plus_nr(ft_mari(ft_itoa_base_s(
			(size_t)va_arg(args, ULLI), 16))));
	else if (c == 'o' || c == 'O')
		return (print_plus_nr(ft_itoa_base_s((size_t)va_arg(args, ULLI), 8)));
	return (0);
}

int		flags_plus_j(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_plus_nr(ft_itoa_base_it((I_T)va_arg(args, ULLI), 10)));
	else if (c == 'u')
		return (print_plus_nr(ft_itoa_base_it((I_T)va_arg(args, ULLI), 10)));
	else if (c == 'p')
		return (print_plus_nr(ft_itoa_base_it((I_T)va_arg(args, ULLI), 10)));
	else if (c == 'x')
		return (print_plus_nr(ft_itoa_base_it((I_T)va_arg(args, ULLI), 16)));
	else if (c == 'X')
		return (print_plus_nr(ft_mari(ft_itoa_base_it(
			(intmax_t)va_arg(args, ULLI), 16))));
	else if (c == 'o' || c == 'O')
		return (print_plus_nr(ft_itoa_base_it((I_T)va_arg(args, ULLI), 8)));
	return (0);
}

int		flags_zero_j(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_zero_nr(ft_itoa_base_it(
			(I_T)va_arg(args, ULLI), 10), '0'));
	else if (c == 'u')
		return (print_zero_nr(ft_itoa_base_it(
			(I_T)va_arg(args, ULLI), 10), '0'));
	else if (c == 'p')
		return (print_zero_nr(ft_itoa_base_it(
			(I_T)va_arg(args, ULLI), 10), '0'));
	else if (c == 'x')
		return (print_zero_nr(ft_itoa_base_it(
			(I_T)va_arg(args, ULLI), 16), '0'));
	else if (c == 'X')
		return (print_zero_nr(ft_mari(ft_itoa_base_it(
			(I_T)va_arg(args, ULLI), 16)), '0'));
	else if (c == 'o' || c == 'O')
		return (print_zero_nr(ft_itoa_base_it(
			(I_T)va_arg(args, ULLI), 8), '0'));
		return (0);
}
