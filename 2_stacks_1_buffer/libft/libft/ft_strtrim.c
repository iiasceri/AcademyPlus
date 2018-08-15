/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:22:21 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:22:22 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	char			*copy;
	char			*beg;
	char			*end;

	if (s)
	{
		beg = ft_skipspace_beg((char*)s);
		end = ft_skipspace_end((char*)beg);
		if (!(copy = (char*)malloc(sizeof(char) * (ft_ptrlen(beg, end) + 1))))
			return (NULL);
		ft_strncpy(copy, beg, ft_ptrlen(beg, end));
		copy[ft_ptrlen(beg, end)] = '\0';
		return (copy);
	}
	else
		return (NULL);
}
