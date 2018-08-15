/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:08:05 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:08:06 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_c(const char *s1, char c)
{
	char*s2;

	if (!(s2 = ft_strnew(ft_strlen(s1))))
		return (NULL);
	ft_strcpy_c(s2, s1, c);
	return (s2);
}
