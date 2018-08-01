/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:14:56 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:14:57 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_nothing(char c)
{
	int nr;

	nr = 0;
	if (c == '\0')
		return (0);
	while (g_pref-- - 1 > 0)
		nr += ft_putchar_f(' ');
	nr += ft_putchar_f(c);
	g_suf = 0;
	return (nr);
}

void	reverse(char *str, int len)
{
	int	i;
	int j;
	int temp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int		intostr(ULI x, char str[], int d)
{
	int i;

	i = 0;
	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}
	while (i < d)
		str[i++] = '0';
	reverse(str, i);
	str[i] = '\0';
	return (i);
}

void	ft_ftoa(double n, char *res, int afterpoint)
{
	ULI		ipart;
	double	fpart;
	ULI		i;

	ipart = (ULI)n;
	fpart = n - (double)ipart;
	i = intostr(ipart, res, 0);
	ipart = (ULI)n;
	fpart = n - (double)ipart;
	i = intostr(ipart, res, 0);
	if (afterpoint != 0)
	{
		res[i] = '.';
		fpart = fpart * ft_pow(10, afterpoint) + 0.000000001;
		intostr((ULI)fpart, res + i + 1, afterpoint);
	}
}

int		print_f(double nb)
{
	int		nr;
	char	*s;
	int		i;
	int		neg;

	i = (g_suf == -1) ? 6 :
		g_suf;
	nr = 0;
	neg = 0;
	s = (char *)malloc(40);
	if (nb < 0)
	{
		nb *= -1.0;
		s[neg++] = '-';
	}
	ft_ftoa(nb, &s[neg], i);
	while (g_pref-- > ft_strlen(s))
		nr += ft_putchar_f(' ');
	nr += ft_putstr_f(s);
	g_suf -= nr;
	while (g_suf-- > 0)
		nr += ft_putchar_f('a');
	return (nr);
}
