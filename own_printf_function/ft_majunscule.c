/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_majunscule.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:06:36 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:06:39 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			restabilire(void)
{
	g_pref = 0;
	g_suf = 0;
}

char			*ft_mari(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}

unsigned int	ft_pow_u(unsigned int nb, int p)
{
	if (p == 0)
		return (1);
	else
		return (nb * ft_pow_u(nb, p - 1));
}

char			*ft_itoa_base_u(unsigned int nr, int base)
{
	char	*str;
	int		i;

	i = 1;
	while (ft_pow_u(base, i) - 1 < nr)
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
	return (str + i + 1);
}
