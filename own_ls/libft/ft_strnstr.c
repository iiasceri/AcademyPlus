/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:51:13 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:51:14 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			found;

	i = -1;
	found = 1;
	if (!ft_strlen(little))
		return ((char *)big);
	while (*(big + ++i) && i < len)
	{
		j = 0;
		if (*(big + i) == *(little + 0))
		{
			k = i;
			found = 1;
			while (*(big + k) && *(little + j) && j < len && k < len)
				if (*(big + k++) != *(little + j++))
					found = 0;
			if (found && !*(little + j))
				return ((char *)big + i);
		}
	}
	return (NULL);
}
