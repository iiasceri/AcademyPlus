/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:15:40 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:15:41 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	char	*c;
	size_t	i;

	c = (char *)malloc(size + 1);
	if (c == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		c[i] = '\0';
		i++;
	}
	return (c);
}
