/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:14:05 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:14:06 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_switch_flags_printf(char *s, va_list args)
{
	char c;

	c = '\0';
	c = check_flags(s);
	s += 1;
	if (c <= 'Z')
		s += 1;
	while (*s == 'z' || *s == 'h' || *s == 'l' || *s == 'j')
		s += 1;
	if (*s == 'c')
		return (print_cc(va_arg(args, u_int32_t)));
	else if (*s == 'C')
		return (print_cc(va_arg(args, u_int32_t)));
	else if (*s == 'S' || (*s == 's' && c == 'l'))
		return (print_ss(va_arg(args, u_int32_t *)));
	else if (*s == 's')
		return (print_s(va_arg(args, char *)));
	else if (*s == 'i' || *s == 'd')
		return (flags_print_nb(args, c));
	else if (*s == 'D')
		return (print_nr_print(ft_itoa_base_lli((LLI)va_arg(args, int), 10)));
	else if (*s == 'p')
		return (print_p(ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 16)));
	return (ft_switch_flags_printf_2(s, args, c));
}

int		ft_switch_flags_printf_2(char *s, va_list args, char c)
{
	if (*s == 'x')
		return (flags_print_x(args, c));
	else if (*s == 'X')
		return (flags_print_xx(args, c));
	else if (*s == 'o')
		return (flags_print_o(args, c));
	else if (*s == 'O')
		return (flags_print_oo(args));
	else if (*s == 'u')
		return (flags_print_nb_u(args, c));
	else if (*s == 'U')
		return (flags_print_nb_uu(args, c));
	else if (*s == '%')
		return (print_procent());
	else if (*s == 'E' || *s == 'e')
		return (print_le(va_arg(args, long double), *s, '\0'));
	else if (*s == 'n')
		return (flags_put_n(args, c));
	else if (*s != '\0')
		return (print_nothing(*s));
	return (0);
}

int		ft_function_flags(char *s, va_list args, char z)
{
	int n;

	n = 0;
	if (z == ' ' && g_pref == 0 && g_suf == 0 && *s != '%')
		ft_putchar_f(' ');
	return (((n = ft_flags_check(s, z, args)) == 0) ?
	ft_switch_flags_printf(s, args) : n);
}
