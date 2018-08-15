/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrto_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:20:18 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:20:19 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchrto_end(char *s, char c)
{
	char	*copy;
	char	*temp;

	if (*s)
	{
		copy = (char*)malloc(sizeof(char) * ((ft_strlen(s) + 2)));
		ft_strcpy(copy, s);
		temp = copy;
		while (*temp)
			temp++;
		*temp = c;
		temp = temp + 1;
		*temp = '\0';
		return (copy);
	}
	else
		return (NULL);
}
