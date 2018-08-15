/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:21:22 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:21:23 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	long len;
	char *ptr;

	len = 0;
	while (str[len] != '\0')
		len++;
	ptr = (char*)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	len--;
	while (len != -1)
	{
		ptr[len] = str[len];
		len--;
	}
	return (ptr);
}
