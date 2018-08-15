/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:22:08 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 15:22:09 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char const	*bigbox;
	char const	*littlebox;

	littlebox = little;
	while (*big != '\0')
	{
		bigbox = big;
		while (*little != '\0' && *big == *little)
		{
			++big;
			++little;
		}
		if (*little == '\0')
			return ((char *)bigbox);
		big = bigbox + 1;
		little = littlebox;
	}
	return (*little == '\0' ? (char *)big : NULL);
}
