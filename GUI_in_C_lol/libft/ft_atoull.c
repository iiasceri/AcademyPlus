/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:28:53 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:28:53 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long	ft_atoull(const char *str)
{
	unsigned long long	nb;
	unsigned long long	tmp;

	nb = 0;
	tmp = 0;
	while (ft_isspace((int)*str))
		str++;
	if (*str == '+')
		str++;
	while (ft_isdigit((int)*str))
	{
		tmp = tmp * 10 + *str - '0';
		str++;
		if (tmp < nb)
			return (0);
		nb = tmp;
	}
	return (nb);
}
