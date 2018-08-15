/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_do_oux_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:25:32 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:25:33 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_do_oux(unsigned int o, t_com **com, int base)
{
	(*com)->scroll = ft_itoa_base(o, base);
}

void	ft_do_oux_hh(unsigned char o, t_com **com, int base)
{
	(*com)->scroll = ft_itoa_base(o, base);
}

void	ft_do_oux_h(unsigned short o, t_com **com, int base)
{
	(*com)->scroll = ft_itoa_base(o, base);
}

void	ft_do_oux_ll(unsigned long long o, t_com **com, int base)
{
	(*com)->scroll = ft_itoa_base_uintmax(o, (uintmax_t)base);
}

void	ft_do_oux_l(unsigned long o, t_com **com, int base)
{
	(*com)->scroll = ft_itoa_base_uintmax(o, (uintmax_t)base);
}
