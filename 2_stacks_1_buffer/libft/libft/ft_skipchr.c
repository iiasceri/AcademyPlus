/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:19:52 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:19:52 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_skipchr(char *s, char c)
{
	if (s)
	{
		while (*(unsigned char*)s == (unsigned char)c)
			s++;
		return ((char*)s);
	}
	else
		return (NULL);
}
