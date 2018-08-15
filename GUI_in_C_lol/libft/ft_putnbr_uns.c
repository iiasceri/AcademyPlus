/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:01:31 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:01:32 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_uns(unsigned long long int n)
{
	if (n >= 10)
	{
		ft_putnbr_uns(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar((n % 10) + '0');
}
