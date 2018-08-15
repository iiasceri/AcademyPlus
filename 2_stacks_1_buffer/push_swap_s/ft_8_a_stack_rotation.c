/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_8_a_stack_rotation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:53:50 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 14:53:50 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

/*
** Rotation number to be on the top of stack a
*/

int				ft_up_a(t_stack *stks, int index)
{
	int			num;

	if (index == stks->top_a)
		return (0);
	num = stks->top_a - index;
	if (num < 0)
		num = -1 * num;
	return (num);
}

int				ft_down_a(t_stack *stks, int index)
{
	if (index == stks->size - 1 && stks->elems_a == 1)
		return (0);
	return (stks->size - index);
}
