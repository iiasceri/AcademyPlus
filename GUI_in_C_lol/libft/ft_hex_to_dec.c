/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:29:23 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:29:24 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hex_to_dec(char *hex)
{
	int		dec;
	int		temp;

	dec = 0;
	temp = 0;
	while (*hex != '\0')
	{
		if (ft_islowhexa(*hex))
			temp = *hex - 'a' + 10;
		else if (ft_isupphexa(*hex))
			temp = *hex - 'A' + 10;
		else if (ft_isdigit(*hex))
			temp = *hex - '0';
		dec = dec * 16 + temp;
		hex++;
	}
	return (dec);
}
