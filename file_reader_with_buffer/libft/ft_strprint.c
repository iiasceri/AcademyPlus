/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:18:13 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:18:14 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strprint(char const *s, char c, size_t index)
{
	size_t	i;
	char	*d;
	size_t	j;

	i = index;
	while (s[i] != '\0' && s[i] != c)
		i++;
	d = (char *)malloc(sizeof(char *) * (i + 1));
	j = 0;
	while (i - index != 0)
	{
		d[j] = s[index];
		index++;
		j++;
	}
	d[j] = '\0';
	return (d);
}
