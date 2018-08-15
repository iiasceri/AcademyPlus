/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:52:04 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 14:52:04 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

char		*ft_strdupn(const char *s1, size_t n)
{
	char	*result;
	char	*temp;

	if (!s1)
		return (NULL);
	result = ft_strnew(n + 1);
	temp = result;
	if (result != NULL)
	{
		while (*s1 && n > 0)
		{
			*temp++ = *s1++;
			n--;
		}
		*temp = '\0';
		return (result);
	}
	else
		return (NULL);
}
