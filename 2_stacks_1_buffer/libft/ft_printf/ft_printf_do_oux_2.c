/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_do_oux_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:25:35 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:25:36 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_do_oux_j(uintmax_t o, t_com **com, int base)
{
	(*com)->scroll = ft_itoa_base_uintmax(o, (uintmax_t)base);
}

void	ft_do_oux_z(size_t o, t_com **com, int base)
{
	(*com)->scroll = ft_itoa_base_uintmax(o, (uintmax_t)base);
}

void	ft_do_oo(long int d, t_com **com)
{
	ft_do_oux_l((unsigned long int)d, *&com, 8);
	(*com)->len = ft_strlen((*com)->scroll);
}

void	ft_do_uu(long int u, t_com **com)
{
	ft_do_oux_l((unsigned long)u, *&com, 10);
	(*com)->len = ft_strlen((*com)->scroll);
}
