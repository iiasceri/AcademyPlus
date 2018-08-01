/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:18:55 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 18:18:56 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (*ptr2 && *ptr1)
	{
		if (*ptr1 != *ptr2)
			return ((int)*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return ((int)(*ptr1 - *ptr2));
}
