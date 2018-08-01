/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:10:06 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:10:07 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		first_if(char c)
{
	if (c == '#' || c == ' ' || c == '0' || c == '-' || c == '+')
		return (1);
	return (0);
}

int		second_if(char s1, char s2)
{
	if ((s1 == '#' && s2 == '-') || (s1 == '-' && s2 == '#'))
		return (1);
	return (0);
}

int		thirt_if(char s1, char s2)
{
	if ((s1 == '+' && s2 == '#') || (s1 == '#' && s2 == '+'))
		return (1);
	return (0);
}

int		thourt_if(char s1, char s2)
{
	if ((s1 == '+' && s2 == '0') || (s1 == '0' && s2 == '+'))
		return (1);
	return (0);
}

void	verificari(char *s, int *i, char *z, int j)
{
	if (first_if(s[*i]))
	{
		if (*z == '\0')
			*z = s[*i];
		while (first_if(s[*i]))
			if (verificari_2(s, i, z, &j))
				i += 0;
			else if (((s[*i] == '#' && s[*i - j] == '0') ||
			(s[*i] == '0' && s[*i - j] == '#')) && (*z = '^'))
				*i += 1;
			else if (second_if(s[*i], s[*i - j]) && (*z = '@'))
				*i += 1;
			else if (thirt_if(s[*i], s[*i - j]) && (*z = ')'))
				*i += 1;
			else if (thourt_if(s[*i], *z) && (*z = 'o'))
				*i += 1;
			else if (s[*i] == '+' && (*z == '-' || *z == '!') && (*z = '*'))
				*i += 1;
			else if (s[*i] == '+' && *z != '-' && (*z = '+'))
				*i += 1;
			else if (s[*i] == '-' && (*z = '-'))
				*i += 1;
			else
				*i += 1;
	}
}
