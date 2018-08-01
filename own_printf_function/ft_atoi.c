/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:06:25 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:06:28 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_pow(int nb, int p)
{
	if (p == 0)
		return (1);
	else
		return (nb * ft_pow(nb, p - 1));
}

char			*ft_itoa_base(int nr, int base)
{
	char	*str;
	int		i;
	int		neg;

	i = 1;
	neg = 0;
	if (nr == -2147483648)
		return ("-2147483648");
	if (nr < 0 && (neg = 1))
		nr *= -1;
	while (ft_pow(base, i) - 1 < nr)
		i++;
	str = (char *)malloc(sizeof(str) * i);
	str[i] = '\0';
	if (nr == 0)
		str[i] = '0';
	while (i-- > 0 && nr > 0)
	{
		str[i] = (nr % base < 10 ? nr % base + '0' : nr % base + 'a' - 10);
		nr /= base;
	}
	if (neg && (*(str + i) = '-'))
		return (str + i);
	return (str + i + 1);
}

int				ft_test(char const *s, int index)
{
	int n;

	n = 0;
	while (s[index] >= '0' && s[index] <= '9')
	{
		n *= 10;
		n += (int)s[index] - '0';
		index++;
	}
	return (n);
}

int				ft_atoi(const char *str)
{
	int n;
	int i;
	int neg;
	int j;

	i = 0;
	neg = -1;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' ||
			str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	j = i;
	while (str[j] >= '0' && str[j] <= '9')
		j++;
	if (j - i > 10)
		return (neg);
	n = ft_test(str, i);
	if (neg)
		return (n);
	return (-n);
}
