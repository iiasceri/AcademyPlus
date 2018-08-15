/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:20:38 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:20:39 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*result;
	char	*temp;
	int		len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	result = (char*)malloc(sizeof(char) * (len + 1));
	temp = result;
	if (result != NULL)
	{
		while (*s1)
			*temp++ = *s1++;
		*temp = '\0';
		return (result);
	}
	else
		return (NULL);
}
