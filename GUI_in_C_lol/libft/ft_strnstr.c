/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:48:57 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 17:48:58 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*ptr;

	ptr = (char*)big;
	i = 0;
	j = 0;
	k = 0;
	while (ptr[i] && i < n)
	{
		j = 0;
		k = i;
		while (ptr[k] == little[j] && ptr[k] && little[j] && k < n)
		{
			j++;
			k++;
		}
		if (little[j] == '\0')
			return (&ptr[i]);
		i++;
	}
	return (0);
}
