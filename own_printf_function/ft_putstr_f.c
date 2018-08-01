/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:14:45 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:14:46 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putchar_f(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_putstr_f(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar_f(str[i]);
		i++;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		str[0] = '\0';
		return (0);
	}
	while (str[i])
		i++;
	return (i);
}
