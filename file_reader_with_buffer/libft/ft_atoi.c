/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:12:28 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:12:29 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_test(char const *s, int index)
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

int			ft_atoi(const char *str)
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
