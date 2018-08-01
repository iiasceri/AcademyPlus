/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:22:07 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:22:08 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *biq, const char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)biq);
	while (biq[i] != '\0')
	{
		j = 0;
		while (biq[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)biq + i - j);
		}
		i = i - j + 1;
	}
	return (NULL);
}
