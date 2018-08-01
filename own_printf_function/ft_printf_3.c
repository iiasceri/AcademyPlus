/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:12:17 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:12:19 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		verificari_2(char *s, int *i, char *z, int *j)
{
	if (s[*i] == ' ' && *z == '0')
		*z = '!';
	else if (s[*i] == ' ' && *z == '^' && (*i += 1))
		*z = '!';
	else if (s[*i] == ' ' && (*j = 1))
		while (s[*i] == ' ' && *(j)++)
			*i += 1;
	else
		return (0);
	return (1);
}

char	check_flags(char *s)
{
	if (*s == 'h' && *(s + 1) == 'h' && *(s + 2) != 'l')
		return ('H');
	else if (*s == 'h')
		return ('h');
	else if (*s == 'l' && *(s + 1) == 'l')
		return ('L');
	else if (*s == 'l')
		return ('l');
	else if (*s == 'j')
		return ('j');
	else if (*s == 'z')
		return ('z');
	else if (*s == 'L')
		return ('E');
	return ('\0');
}

char	ft_flags_check_2(char **s, char *z)
{
	int		x;
	char	c;

	x = 0;
	c = check_flags(*s);
	(*s)++;
	if (c <= 'Z')
		(*s)++;
	while (*(*s) == 'z' || *(*s) == 'h' || *(*s) == 'l' || *(*s) == 'j')
		(*s)++;
	verificari(*s, &x, z, 1);
	*s += x;
	return (c);
}

int		ft_flags_check(char *s, char z, va_list args)
{
	char c;

	c = ft_flags_check_2(&s, &z);
	if (z == '#' && (*s == 'x' || *s == 'X' || *s == 'o'))
		return (ft_flags_diez(*s, args, c));
	else if (z == '^' && *s != 'O')
		return (ft_flags_zero_diez(*s, args, c));
	else if (z == '@' && *s != 'O')
		return (ft_flags_minus_diez(*s, args, c));
	else if (z == ')' && *s != 'O')
		return (ft_flags_plus_diez(*s, args, c));
	if (z == '0' && *s != 'O')
		return (ft_flags_zero(*s, args, c));
	if (z == '-' && *s != 'O')
		return (ft_flags_minus(*s, args, c));
	if (z == '+' && *s != 'O')
		return (ft_flags_plus(*s, args, c));
	return (0);
}

int		ft_check_flag(char *s, int *i)
{
	int j;

	j = 0;
	while (s[*i] == 'h' || s[*i] == 'l' || s[*i] == 'z' || s[*i] == 'j' ||
	s[*i] == 'L')
	{
		j++;
		*i += 1;
	}
	return (j);
}
