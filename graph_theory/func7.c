/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:35:28 by iiasceri          #+#    #+#             */
/*   Updated: 2018/04/02 12:35:28 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_min(int x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

void	ft_create_d_path(void)
{
	int j;
	int i;

	g_d = (int**)malloc(sizeof(int*) * g_count);
	i = -1;
	while (++i < g_count)
		*(g_d + i) = (int*)malloc(sizeof(int) * g_count);
	g_path = (int*)malloc(sizeof(int) * (g_count + 1));
	g_temp = (int**)malloc(sizeof(int*) * g_count);
	i = -1;
	while (++i < g_count)
		*(g_temp + i) = (int*)malloc(sizeof(int) * g_count);
	i = -1;
	while (++i < g_count)
	{
		j = -1;
		while (++j < g_count)
			g_temp[i][j] = g_tab[i][j];
	}
}
