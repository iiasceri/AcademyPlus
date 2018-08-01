/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:10:30 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:10:32 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_zero_s(char *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (g_suf == -1 || (str[0] == '%' && str[1] == '\0'))
		g_suf = 0;
	else
		len = FT_MIN(len, g_suf);
	while (g_pref > len && (g_pref--) - len - i > 0)
		nr += ft_putchar_f('0');
	while (len--)
		nr += ft_putchar_f(str[i++]);
	while ((g_pref++) + i < 0)
		nr += ft_putchar_f('0');
	return (nr);
}

int		print_zero_ss(u_int32_t *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	if (str == NULL)
		return (print_zero_s(NULL));
	len = ft_strlen_w(str);
	if (g_suf == -1 || (str[0] == '%' && str[1] == '\0'))
		g_suf = 0;
	else
		len = FT_MIN(len, g_suf);
	while (g_pref > len && (g_pref--) - len > 0)
		nr += ft_putchar_f('0');
	i = nr + len;
	while (nr + ft_strlen_ch(*str) < i + 1)
		nr += ft_putwchar_f(*str++);
	return (nr);
}

int		ft_zero_test(char c, va_list args)
{
	if (c == '%')
		return (print_zero_s("%"));
	else if (c == 's')
		return (print_zero_s((char *)va_arg(args, char *)));
	else if (c == 'S')
		return (print_zero_ss(va_arg(args, u_int32_t *)));
	else if (c == 'c')
		return (print_zero_chr(va_arg(args, int)));
	else
		return (print_zero_nothing(c));
}

char	p(void)
{
	ft_putstr_f("0x");
	g_pref -= 2;
	return ('0');
}

int		ft_zero(char c, va_list args, char z)
{
	if (c == 'd' || c == 'i')
		return (print_zero_nr(ft_itoa_base(va_arg(args, int), 10), z));
	else if (c == 'x')
		return (print_zero_nr(ft_itoa_base_u(
			va_arg(args, UI), 16), '0'));
	else if (c == 'X')
		return (print_zero_nr(ft_mari(ft_itoa_base_u(
			va_arg(args, UI), 16)), '0'));
	else if (c == 'o' || c == '0')
		return (print_zero_nr(ft_itoa_base_u(
			va_arg(args, UI), 8), '0'));
	else if (c == 'u')
		return (print_zero_nr(ft_itoa_base_u(
			va_arg(args, UI), 10), '0'));
	else if (c == 'p')
		return (print_zero_nr(ft_itoa_base_ulli(
			(ULLI)va_arg(args, ULI), 16), p()) + 2);
		return (ft_zero_test(c, args));
}
