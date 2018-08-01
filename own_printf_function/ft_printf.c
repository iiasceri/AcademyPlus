/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:09:13 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:09:14 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_s_p_2(char c, va_list args)
{
	if (c == 'o')
		return (print_nr_print(ft_itoa_base_u(va_arg(args, int), 8)));
	else if (c == 'O')
		return (print_nr_print(ft_itoa_base_ulli((ULLI)
		va_arg(args, LI), 8)));
	else if (c == 'u')
		return (print_u_print(ft_itoa_base_u(va_arg(args, LI), 10)));
	else if (c == 'U')
		return (print_u_print(ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 10)));
	else if (c == '%')
		return (print_procent());
	else if (c == 'f' || c == 'F')
		return (print_f(va_arg(args, double)));
	else if (c == 'b')
		return (print_nr_print(ft_itoa_base(va_arg(args, int), 2)));
	else if (c == 'n')
		*va_arg(args, int *) = g_put_nr;
	else if (c != '\0')
		return (print_nothing(c));
	return (0);
}

int		ft_switch_printf(char c, va_list args, char z)
{
	if (c == 'c')
		return (print_c(va_arg(args, int)));
	else if (c == 'C')
		return (print_cc(va_arg(args, u_int32_t)));
	else if (c == 's')
		return (print_s(va_arg(args, char *)));
	else if (c == 'S')
		return (print_ss(va_arg(args, u_int32_t *)));
	else if (c == 'i' || c == 'd')
		return (print_d_print(ft_itoa_base(va_arg(args, int), 10), z));
	else if (c == 'D')
		return (print_d_print(ft_itoa_base_lli((LLI)va_arg(args, LLI), 10), z));
	else if (c == 'p')
		return (print_p(ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 16)));
	else if (c == 'x')
		return (print_nr_print(ft_itoa_base_u(va_arg(args, int), 16)));
	else if (c == 'X')
		return (print_nr_print(ft_mari(ft_itoa_base_u(va_arg(args, int), 16))));
	else if (c == 'e' || c == 'E')
		return (print_e(va_arg(args, double), c, z));
	return (ft_s_p_2(c, args));
}

int		ft_function(char *s, va_list args, char z)
{
	int n;
	int nr;

	n = 0;
	nr = 0;
	if (z == ' ' && g_pref == 0 && g_suf == -1 && *s != '%' && *s != 'c'
	&& *s != 'C' && *s != 'd' && *s != 'u' && *s != 'i' && *s != 's' &&
	test(s, &nr) && *s != 'o' && *s != 'x' && *s != 'X' && *s != 'p' &&
	*s != 'S')
		nr += ft_putchar_f(' ');
	return ((((n = ft_check(*s, z, args)) == -1) ?
	ft_switch_printf(*s, args, z) : n) + nr);
}

int		ft_switch(char *s, va_list args, int *i, int f)
{
	char	z;
	int		j;

	z = '\0';
	verificari(s, i, &z, 1);
	if (!(test(s, i)))
		return (print_nothing(s[*i]));
	(s[*i] == '*') ? ft_switch_stea(i, &z, args) : 0;
	(FT_S_P(s[*i]) ? g_pref = ft_atoi(&s[*i]) : 0);
	while (s[*i] >= '0' && s[*i] <= '9')
		*i += 1;
	(s[*i] == '*') ? ft_switch_stea(i, &z, args) : 0;
	(s[*i] == '.' && (*i += 1)) ? g_suf = ft_atoi(&s[*i]) :
	(g_suf = -1);
	while (s[*i] >= '0' && s[*i] <= '9')
		*i += 1;
	trecere(s, i, &z, args);
	if (s[*i] == '*' && (*i += 1) && (g_suf = va_arg(args, int) < 0))
		g_suf = -1;
	verificari(s, i, &z, 1);
	if ((f = ft_check_flag(s, i)) == 0)
		return (ft_function(&s[*i], args, z));
	j = *i;
	verificari(s, i, &z, 1);
	return (ft_function_flags(&s[*i - f - *i + j], args, z));
}

int		ft_printf(const char *format, ...)
{
	va_list	args;
	char	*string;
	int		i;

	i = 0;
	g_put_nr = 0;
	va_start(args, format);
	string = (char *)format;
	while (string[i] != '\0')
	{
		while (string[i] != '%' && string[i] != '\0')
		{
			g_put_nr += ft_putchar_f(string[i]);
			i++;
		}
		if (string[i] != '\0')
		{
			i++;
			restabilire();
			g_put_nr += ft_switch(string, args, &i, 0);
			if (string[i] != '\0' && string[i] != ' ')
				i++;
		}
	}
	return (g_put_nr);
}
