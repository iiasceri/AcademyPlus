/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:08:53 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 18:08:53 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char		*ret;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i])
		i++;
	i--;
	while ((size_t)j != ft_strlen(str))
	{
		ret[j] = str[i];
		j++;
		i--;
	}
	ret[j] = '\0';
	return (ret);
}
