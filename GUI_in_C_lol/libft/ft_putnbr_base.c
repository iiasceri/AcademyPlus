/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 17:56:11 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 17:56:11 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned long long int n, char *base)
{
	if (n >= ft_strlen(base))
		ft_putnbr_base(n / ft_strlen(base), base);
	ft_putchar(base[n % ft_strlen(base)]);
}
