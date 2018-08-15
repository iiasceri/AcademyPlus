/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:32:10 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:32:10 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	list = NULL;
	i = 1;
	if (ac)
		while (i < ac)
		{
			ft_list_push_front(&list, av[i]);
			i++;
		}
	return (list);
}
