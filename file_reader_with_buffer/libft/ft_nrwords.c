/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nrwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:21:26 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:21:27 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nrwords(char const *s, char c)
{
	int i;
	int nr;

	i = 0;
	nr = 0;
	while (s[i] != '\0')
	{
		i++;
		if ((s[i] == c || s[i] == '\0') && s[i - 1] != c)
			nr++;
	}
	return (nr);
}
