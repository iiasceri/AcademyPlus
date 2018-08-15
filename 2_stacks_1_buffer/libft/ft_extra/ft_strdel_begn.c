/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_begn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:52:00 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 14:59:25 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_extra.h"

char				*ft_strdel_begn(char *str, size_t n)
{
	char			*result;
	size_t			len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	if (n > len)
		return (NULL);
	if (!(result = ft_strnew(len - n + 2)))
		return (NULL);
	ft_memnncpy(result, str, n, (len - n));
	return (result);
}
