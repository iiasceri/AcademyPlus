/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:21:50 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:21:50 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*match;
	int		truth;

	truth = 0;
	while (*s != '\0')
	{
		if (c == *s)
		{
			match = (char*)s;
			truth = 1;
		}
		s++;
	}
	if (truth > 0)
		return (match);
	if (c == '\0')
		return ((char*)s);
	else
		return (NULL);
}
