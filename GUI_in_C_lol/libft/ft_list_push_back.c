/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:32:00 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:32:01 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *content)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			ft_list_push_back(&(*begin_list)->next, content);
		else
			(*begin_list)->next = ft_create_elem(content);
	}
	else
		*begin_list = ft_create_elem(content);
}
