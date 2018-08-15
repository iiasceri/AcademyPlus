/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwlen_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:09:03 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:09:03 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strwlen_n(const wchar_t *s, int n)
{
	size_t	i;

	i = 0;
	if (s && n != 0)
	{
		while (*s != '\0' && n >= ft_wcharlen(*s))
		{
			n -= ft_wcharlen(*s);
			i += ft_wcharlen(*s);
			s++;
		}
	}
	return (i);
}
