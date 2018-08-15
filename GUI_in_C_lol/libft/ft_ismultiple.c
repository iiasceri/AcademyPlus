/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismultiple.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:30:30 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:30:30 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ismultiple(int nb, int mlt)
{
	long long int	nbr;
	int				ret;

	nbr = nb;
	ret = nbr % mlt;
	return (ret == 0 ? 1 : -1);
}
