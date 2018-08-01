/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:14:00 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:14:01 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	if (s != 0)
	{
		ptr = (char*)malloc(sizeof(char) * (len + 1));
		if (ptr)
		{
			len += start;
			while (s[start] && start != len)
			{
				ptr[i] = s[start];
				i++;
				start++;
			}
			ptr[i] = 0;
			return (ptr);
		}
	}
	return (0);
}
