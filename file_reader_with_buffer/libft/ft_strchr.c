/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:13:24 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:13:25 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *d;

	d = (char *)s;
	while (*d != '\0' && *d != (unsigned char)c)
		d++;
	if (*d == '\0' && (unsigned char)c != '\0')
		return (0);
	return ((char *)d);
}
