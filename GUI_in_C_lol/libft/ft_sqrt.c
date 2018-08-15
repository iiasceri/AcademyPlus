/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:07:44 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:07:45 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int root;

	root = 1;
	while (root * root != nb)
	{
		if (root / 2 > nb)
		{
			break ;
		}
		root++;
	}
	if (root * root == nb)
		return (root);
	return (0);
}
