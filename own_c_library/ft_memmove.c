/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:18:45 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:18:46 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int		i;
	unsigned char		*ptr_dest;
	const unsigned char *ptr_src;

	ptr_dest = dst;
	ptr_src = src;
	i = 0;
	if (ptr_dest > ptr_src)
		while (len--)
		{
			ptr_dest[len] = ptr_src[len];
		}
	else
	{
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
