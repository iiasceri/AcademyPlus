/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:22:57 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:22:57 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include "fdf_define.h"
# include "fdf_struct.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <math.h>
# include <mlx.h>

int		ft_check(char *argv);
int		ft_fdf(char *argv);

int		ft_create_map(char *argv, t_env *fdf);

int		ft_mlx(t_env *fdf);
void	ft_init(t_env *fdf);
void	ft_window(t_env *fdf);

int		ft_key_hook(int keycode, t_env *fdf);
void	ft_key_hook_color(int keycode, t_env *fdf);
void	ft_key_hook_move(int keycode, t_env *fdf);
void	ft_key_hook_alt(int keycode, t_env *fdf);
void	ft_key_hook_zoom(int keycode, t_env *fdf);
void	ft_key_hook_proj(t_env *fdf);

int		ft_mouse_hook(int button, int x, int y, t_env *fdf);

int		ft_expose_hook(t_env *fdf);

void	ft_bresenham(t_env*fdf);
void	ft_pixel_put(t_env *fdf, int x, int y);

void	ft_draw(t_env *fdf);
void	ft_point_collumn_x_one(t_env *fdf);
void	ft_point_collumn_x_two(t_env *fdf);
void	ft_point_line_x_one(t_env *fdf);
void	ft_point_line_x_two(t_env *fdf);

#endif
