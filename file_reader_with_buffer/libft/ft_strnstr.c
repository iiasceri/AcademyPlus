/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:16:43 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:16:44 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *biq, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)biq);
	i = 0;
	j = 0;
	while (biq[i] != '\0' && len > i)
	{
		j = 0;
		while (biq[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0' && len >= i)
				return ((char *)biq + i - j);
		}
		i = i - j + 1;
	}
	return (NULL);
}
