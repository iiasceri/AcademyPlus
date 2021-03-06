/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:22:17 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:22:18 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	if (s)
	{
		str = (char*)malloc(sizeof(char) * (len + 1));
		if (str)
		{
			ptr = str;
			while (len-- > 0 && *s != '\0')
				*ptr++ = s[start++];
			*ptr = '\0';
			return (str);
		}
		else
			return (NULL);
	}
	return (NULL);
}
