/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:17:22 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:17:22 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		ft_fdf(char *argv)
{
	t_env	fdf;

	ft_bzero(&fdf, sizeof(t_env));
	ft_create_map(argv, &fdf);
	ft_mlx(&fdf);
	free(*(fdf.map.map));
	ft_bzero(&fdf, sizeof(t_env));
	return (0);
}
