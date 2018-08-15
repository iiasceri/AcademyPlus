/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:19:06 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:19:07 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, unsigned int len)
{
	while (len && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--len;
	}
	if (len == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
	return (0);
}
