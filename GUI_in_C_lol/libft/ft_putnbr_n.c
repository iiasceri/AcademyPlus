/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:01:25 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:01:26 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_n(long long int nb, int n)
{
	static int i = 0;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		i++;
	}
	if (nb > 9 && i < n)
	{
		ft_putnbr(i);
		i++;
		ft_putnbr_n(nb / 10, n);
	}
	ft_putchar(nb % 10);
}
