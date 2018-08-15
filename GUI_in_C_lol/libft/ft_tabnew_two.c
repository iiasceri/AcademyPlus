/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:09:32 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:09:32 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_tabnew_two(size_t x, size_t y)
{
	size_t	i;
	int		**tab;
	int		*tab2;

	i = 0;
	if (!(tab = (int**)malloc(sizeof(tab) * y)))
		return (NULL);
	if (!(tab2 = (int*)malloc(sizeof(tab2) * (x * y))))
		return (NULL);
	while (i < y)
	{
		tab[i] = &tab2[i * x];
		i++;
	}
	return (tab);
}
