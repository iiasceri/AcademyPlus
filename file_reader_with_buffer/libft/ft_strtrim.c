/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:10:06 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:10:07 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*d;
	int		x;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	x = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[x] == ' ' || s[x] == ',' || s[x] == '\n' || s[x] == '\t')
		x--;
	if (x < i)
		x = i;
	d = (char*)malloc(sizeof(char) * (x - i) + 2);
	if (d == NULL)
		return (NULL);
	while (i <= x)
		d[j++] = s[i++];
	d[j] = '\0';
	return (d);
}
