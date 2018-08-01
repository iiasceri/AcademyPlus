/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:19:34 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:19:35 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	index;
	char	*d;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	index = 0;
	d = (char *)malloc(i + 1);
	if (d == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		d[index] = f(index, s[index]);
		index++;
	}
	d[index] = '\0';
	return (d);
}
