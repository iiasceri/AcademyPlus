/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:12:54 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:12:56 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned int		i;
	unsigned char		*ptr_dest;
	const unsigned char *ptr_src;
	unsigned char		s;

	s = (unsigned char)c;
	i = 0;
	ptr_dest = (unsigned char*)dst;
	ptr_src = src;
	if (n)
	{
		while (i < n)
		{
			if ((*ptr_dest++ = ptr_src[i]) == s)
				return (ptr_dest);
			i++;
		}
	}
	return (0);
}
