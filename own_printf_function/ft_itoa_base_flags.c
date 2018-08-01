/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_flags.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:14:36 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:14:37 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

ULLI		ft_pow_ulli(int nb, int p)
{
	if (p == 0)
		return (1);
	else
		return ((ULLI)nb * ft_pow_ulli(nb, p - 1));
}

char		*ft_itoa_base_ulli(ULLI nr, int base)
{
	char	*str;
	int		i;

	i = 1;
	if (nr == 0)
		return ("0");
	while (ft_pow_ulli(base, i) - 1 < nr)
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

LLI			ft_pow_lli(unsigned int nb, int p)
{
	if (p == 0)
		return (1);
	else
		return ((ULLI)nb * ft_pow_lli(nb, p - 1));
}

char		*ft_itoa_base_lli_str(LLI nr, int i)
{
	char	*str;

	str = (char *)malloc(sizeof(str) * i);
	str[i] = '\0';
	if (nr == 0)
		str[i] = '0';
	return (str);
}

char		*ft_itoa_base_lli(LLI nr, int base)
{
	char	*str;
	int		i;
	int		neg;

	neg = 0;
	i = 1;
	if (nr < -9223372036854775807)
		return ("-9223372036854775808");
	if (nr < 0 && (neg = 1))
		nr *= -1;
	while (ft_pow_lli(base, i) - 1 < nr)
		i++;
	str = ft_itoa_base_lli_str(nr, i);
	while (i-- > 0 && nr > 0)
	{
		str[i] = (nr % base < 10 ? nr % base + '0' : nr % base + 'a' - 10);
		nr /= base;
	}
	if (neg)
		*(str + i) = '-';
	return (neg ? str + i : str + i + 1);
}
