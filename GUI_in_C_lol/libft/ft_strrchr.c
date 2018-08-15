/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:49:53 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 17:49:54 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char *ptr;
	char *aux;

	ptr = (char *)str;
	aux = (char *)str;
	while (*ptr)
		ptr++;
	while (ptr != aux)
	{
		if (*ptr-- == c)
			return (++ptr);
	}
	if (*ptr == c)
		return (ptr);
	return (0);
}
