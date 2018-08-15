/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:04:32 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:04:32 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwstr_n(wchar_t *s, int n)
{
	if (s && n != 0)
	{
		while (*s != '\0' && n > 0)
		{
			if (n >= ft_wcharlen(*s))
				ft_putwchar(*s);
			n -= ft_wcharlen(*s);
			s++;
		}
	}
}
