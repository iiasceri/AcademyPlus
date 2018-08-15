/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:31:04 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:31:05 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(unsigned long long int n, char *base)
{
	char				*str;
	unsigned long long	i;

	i = ft_strlen(base);
	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n >= i)
		str = ft_strjoin(ft_itoa_base(n / i, base), ft_itoa_base(n % i, base));
	else if (n < i)
	{
		str[0] = base[n];
		str[1] = '\0';
	}
	return (str);
}
