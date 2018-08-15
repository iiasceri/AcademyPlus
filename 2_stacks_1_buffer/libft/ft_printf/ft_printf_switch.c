/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_switch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:27:32 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:27:39 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_switch_d(va_list ap, t_com **com)
{
	free((*com)->scroll);
	(*com)->scroll = NULL;
	if ((*com)->length == NULL)
		ft_do_d((*com)->var.d = va_arg(ap, int), *&com);
	else if (*(*com)->length == 'h' && *((*com)->length + 1) == 'h')
		ft_do_d_hh((*com)->var.sc = va_arg(ap, int), *&com);
	else if (*(*com)->length == 'h')
		ft_do_d_h((*com)->var.sh = va_arg(ap, int), *&com);
	else if (*(*com)->length == 'l' && *((*com)->length + 1) == 'l')
		ft_do_d_ll((*com)->var.ll = va_arg(ap, long long), *&com);
	else if (*(*com)->length == 'l')
		ft_do_d_l((*com)->var.lo = va_arg(ap, long), *&com);
	else if (*(*com)->length == 'j')
		ft_do_d_j((*com)->var.it = va_arg(ap, intmax_t), *&com);
	else if (*(*com)->length == 'z')
		ft_do_d_z((*com)->var.zu = va_arg(ap, unsigned long int), *&com);
	(*com)->len = ft_strlen((*com)->scroll);
}

static void	ft_switch_oux(va_list ap, t_com **com, int base, int yesno)
{
	free((*com)->scroll);
	(*com)->scroll = NULL;
	if ((*com)->length == NULL)
		ft_do_oux((*com)->var.o = va_arg(ap, unsigned int), *&com, base);
	else if (*(*com)->length == 'h' && *((*com)->length + 1) == 'h')
		ft_do_oux_hh((*com)->var.uc = va_arg(ap, int), *&com, base);
	else if (*(*com)->length == 'h')
		ft_do_oux_h((*com)->var.us = va_arg(ap, int), *&com, base);
	else if (*(*com)->length == 'l' && *((*com)->length + 1) == 'l')
		ft_do_oux_ll(
				(*com)->var.ull = va_arg(ap, unsigned long long), *&com, base);
	else if (*(*com)->length == 'l')
		ft_do_oux_l((*com)->var.ul = va_arg(ap, unsigned long), *&com, base);
	else if (*(*com)->length == 'j')
		ft_do_oux_j((*com)->var.ut = va_arg(ap, uintmax_t), *&com, base);
	else if (*(*com)->length == 'z')
		ft_do_oux_z((*com)->var.zu = va_arg(ap, size_t), *&com, base);
	(*com)->len = ft_strlen((*com)->scroll);
	if (yesno == 1)
		ft_mod_string_to_upper((*com)->scroll, *&com);
}

static void	ft_switch2(char c, va_list ap, t_com **com)
{
	if (c == 'c')
	{
		if ((*com)->length && *(*com)->length == 'l')
			ft_do_cc((*com)->var.wc = va_arg(ap, wchar_t), *&com);
		else
			ft_do_c((*com)->var.c = va_arg(ap, int), *&com);
	}
	else if (c == 'C')
		ft_do_cc((*com)->var.wc = va_arg(ap, wchar_t), *&com);
	else if (c == 'x')
		ft_switch_oux(ap, *&com, 16, 0);
	else if (c == 'X')
		ft_switch_oux(ap, *&com, 16, 1);
}

void		ft_switch(char c, va_list ap, t_com **com)
{
	if (c == 's')
	{
		if ((*com)->length && *(*com)->length == 'l')
			ft_do_ss((*com)->var.ws = va_arg(ap, wchar_t*), *&com);
		else
			ft_do_s((*com)->var.s = va_arg(ap, char*), *&com);
	}
	else if (c == 'S')
		ft_do_ss((*com)->var.ws = va_arg(ap, wchar_t*), *&com);
	else if (c == 'p')
		ft_do_p((*com)->var.p = va_arg(ap, void *), *&com);
	else if (c == 'd' || c == 'i')
		ft_switch_d(ap, *&com);
	else if (c == 'D')
		ft_do_dd((*com)->var.l = va_arg(ap, long int), *&com);
	else if (c == 'o')
		ft_switch_oux(ap, *&com, 8, 0);
	else if (c == 'O')
		ft_do_oo((*com)->var.l = va_arg(ap, long int), *&com);
	else if (c == 'u')
		ft_switch_oux(ap, *&com, 10, 0);
	else if (c == 'U')
		ft_do_uu((*com)->var.l = va_arg(ap, long int), *&com);
	else
		ft_switch2(c, ap, *&com);
}
