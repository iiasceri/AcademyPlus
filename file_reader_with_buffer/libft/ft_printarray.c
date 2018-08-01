/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:07:29 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:07:32 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printarray(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		ft_putstr(array[i]);
		i++;
	}
}