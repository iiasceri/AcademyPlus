/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:16:36 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:16:37 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (s && f)
	{
		ptr = (char*)malloc((ft_strlen((char*)s) + 1) * sizeof(char));
		if (ptr)
		{
			while (*s)
			{
				ptr[i] = f(i, *s);
				i++;
				s++;
			}
			ptr[i] = 0;
			return (ptr);
		}
	}
	return (0);
}
