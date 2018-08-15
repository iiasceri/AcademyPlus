/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:17:53 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:17:54 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		ft_mlx(t_env *fdf)
{
	fdf->mlx_ptr = mlx_init();
	ft_window(fdf);
	ft_init(fdf);
	fdf->win_ptr = mlx_new_window(fdf->mlx_ptr, fdf->win_length,
			fdf->win_width, "fdf");
	mlx_key_hook(fdf->win_ptr, ft_key_hook, fdf);
	mlx_expose_hook(fdf->win_ptr, ft_expose_hook, fdf);
	mlx_loop(fdf->mlx_ptr);
	return (0);
}
