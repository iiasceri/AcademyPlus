/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:17:39 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:17:39 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_key_hook_color(int keycode, t_env *fdf)
{
	if (keycode == R)
		fdf->color.red -= 20;
	if (keycode == G)
		fdf->color.green -= 20;
	if (keycode == B)
		fdf->color.blue -= 20;
}
