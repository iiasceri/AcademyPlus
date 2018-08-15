/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:09:07 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:09:08 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strwlen(const wchar_t *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((int)s[i] < 0x7F)
			j += 1;
		else if ((int)s[i] < 0x7FF)
			j += 2;
		else if ((int)s[i] < 0xFFFF)
			j += 3;
		else if ((int)s[i] < 0x10FFFF)
			j += 4;
		i++;
	}
	return (j);
}
