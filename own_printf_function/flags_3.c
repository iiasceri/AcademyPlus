/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:12:40 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:12:41 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_pow_s(unsigned int nb, int p)
{
	if (p == 0)
		return (1);
	else
		return ((ULLI)nb * ft_pow_s(nb, p - 1));
}

char		*ft_itoa_base_s(size_t nr, int base)
{
	char	*str;
	int		i;

	i = 1;
	while (ft_pow_s(base, i) - 1 < nr)
		i++;
	str = (char *)malloc(sizeof(str) * i);
	str[i] = '\0';
	while (i-- > 0 && nr > 0)
	{
		str[i] = (nr % base < 10 ? nr % base + '0' : nr % base + 'a' - 10);
		nr /= base;
	}
	return (str + i + 1);
}

uintmax_t	ft_pow_it(unsigned int nb, int p)
{
	if (p == 0)
		return (1);
	else
		return (nb * ft_pow_it(nb, p - 1));
}

char		*ft_itoa_base_it(intmax_t nr, int base)
{
	char		*str;
	int			i;
	uintmax_t	nr2;

	i = 1;
	if (nr < 0)
		nr2 = 9223372036854775807 + nr + 2 + 9223372036854775807;
	else
		nr2 = nr;
	while (ft_pow_it(base, i) - 1 < nr2 && i < 30)
		i++;
	str = (char *)malloc(sizeof(str) * i);
	str[i] = '\0';
	while (i-- > 0 && nr2 > 0)
	{
		str[i] = (nr2 % base < 10 ? nr2 % base + '0' : nr2 % base + 'a' - 10);
		nr2 /= base;
	}
	return (&str[i + 1]);
}

int			flags_zero_z(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_zero_nr(ft_itoa_base_s(
			(size_t)va_arg(args, ULLI), 10), '0'));
	else if (c == 'u')
		return (print_zero_nr(ft_itoa_base_s(
			(size_t)va_arg(args, ULLI), 10), '0'));
	else if (c == 'p')
		return (print_zero_nr(ft_itoa_base_s(
			(size_t)va_arg(args, ULLI), 10), '0'));
	else if (c == 'x')
		return (print_zero_nr(ft_itoa_base_s(
			(size_t)va_arg(args, ULLI), 16), '0'));
	else if (c == 'X')
		return (print_zero_nr(ft_mari(ft_itoa_base_s(
			(size_t)va_arg(args, ULLI), 16)), '0'));
	else if (c == 'o' || c == 'O')
		return (print_zero_nr(ft_itoa_base_s(
			(size_t)va_arg(args, ULLI), 8), '0'));
		return (0);
}
