/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:22:57 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:23:04 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr;
	unsigned char	key;

	key = (unsigned char)c;
	ptr = (unsigned char*)s;
	i = 0;
	while (i++ < n)
		if (*ptr++ == key)
			return (--ptr);
	return (0);
}
