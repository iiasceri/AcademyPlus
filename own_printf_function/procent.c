/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:08:34 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:08:35 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_print_minus_procent(void)
{
	int nr;

	nr = 0;
	nr += ft_putchar_f('%');
	while ((g_pref) > 1 && (g_pref--) - 1 > 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		print_procent(void)
{
	int nr;

	nr = 0;
	while ((g_pref) > 1 && (g_pref--) - 1 > 0)
		nr += ft_putchar_f(' ');
	nr += ft_putchar_f('%');
	while (g_pref < 0 && g_pref++ + 1 < 0)
		nr += ft_putchar_f(' ');
	return (nr);
}
