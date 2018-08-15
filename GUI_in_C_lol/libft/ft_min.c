/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:46:21 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:46:22 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int *tab, unsigned int len)
{
	unsigned int	i;
	int				min;

	if (len == 0)
		return (0);
	i = 1;
	min = *tab;
	while (i != len)
	{
		if (min > *(tab + i))
			min = *(tab + i);
		i++;
	}
	return (min);
}
