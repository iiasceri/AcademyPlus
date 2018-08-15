/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:08:44 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:08:45 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strnew_two(size_t x, size_t y)
{
	char	**tab;
	char	*tableau2;
	size_t	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * y);
	tableau2 = (char *)malloc(sizeof(char) * x * y);
	while (i < y)
	{
		tab[i] = &tableau2[i * x];
		i++;
	}
	return (tab);
}
