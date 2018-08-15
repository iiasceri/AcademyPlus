/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:50:37 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 17:50:37 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_check(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (1);
	}
	if (n == 2147483647)
	{
		ft_putstr("2147483647");
		return (1);
	}
	return (0);
}

void			ft_putnbr(int n)
{
	int var;
	int size;

	if (ft_check(n))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	var = n;
	size = 1;
	while ((n / 10) > 0)
	{
		n = n / 10;
		size = size * 10;
	}
	while (size != 0)
	{
		ft_putchar((char)((var / size) + 48));
		var = var % size;
		size = size / 10;
	}
}
