/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:31:54 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:31:54 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if ((*begin_list1) == NULL)
		*begin_list1 = begin_list2;
	else if ((*begin_list1)->next == NULL)
		(*begin_list1)->next = begin_list2;
	else
		ft_list_merge(&((*begin_list1)->next), begin_list2);
}
