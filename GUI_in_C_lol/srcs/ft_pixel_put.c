/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:17:58 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:17:58 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_pixel_put(t_env *fdf, int x, int y)
{
	if (x > 0 && y > 0 && x < fdf->win_length && y < fdf->win_width)
	{
		fdf->data[(x * (fdf->bpp / 8)) +
			(y * fdf->size_line)] = fdf->color.red;
		fdf->data[(x * (fdf->bpp / 8)) +
			(y * fdf->size_line) + 1] = fdf->color.green;
		fdf->data[(x * (fdf->bpp / 8)) +
			(y * fdf->size_line) + 2] = fdf->color.blue;
	}
}
