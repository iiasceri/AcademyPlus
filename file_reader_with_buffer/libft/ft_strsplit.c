/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:20:49 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:20:51 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		nr;
	char	**d;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	nr = ft_nrwords(s, c);
	d = (char **)malloc(nr * sizeof(char **) + 1);
	if (d == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (nr != 0)
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			d[j] = ft_strprint(s, c, i);
			nr--;
			j++;
		}
		i++;
	}
	d[j] = 0;
	return (d);
}
