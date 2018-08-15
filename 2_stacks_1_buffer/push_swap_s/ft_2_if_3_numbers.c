/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2_if_3_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:52:28 by iiasceri          #+#    #+#             */
/*   Updated: 2018/03/22 14:52:28 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

/*
** if 2 and 3 numbers
*/

int				ft_eq_2(t_stack *stks)
{
	sa(stks);
	ft_putstr("sa\n");
	return (1);
}

static t_oper	*ft_steps_for_3(t_stack *stks, t_oper *steps)
{
	ft_set_min_max_a(stks);
	if (stks->a_mxi == stks->top_a + 1 && stks->a_mni == stks->top_a)
		steps = ft_add_step(ft_add_step(steps, 8), 0);
	else if (stks->a_mxi == stks->top_a && stks->a_mni == stks->top_a + 2)
		steps = ft_add_step(ft_add_step(steps, 5), 0);
	else if (stks->a_mxi == stks->top_a && stks->a_mni == stks->top_a + 1)
		steps = ft_add_step(steps, 5);
	else if (stks->a_mxi == stks->top_a + 2 && stks->a_mni == stks->top_a + 1)
		steps = ft_add_step(steps, 0);
	else if (stks->a_mxi == stks->top_a + 1 && stks->a_mni == stks->top_a + 2)
		steps = ft_add_step(steps, 8);
	return (steps);
}

int				ft_eq_3(t_stack *stks, t_oper *steps_five, int incident)
{
	t_oper		*steps;

	steps = NULL;
	if (incident == 1)
	{
		steps = ft_steps_for_3(stks, steps);
		ft_use_print_and_free(stks, &steps);
	}
	else if (incident == 2)
	{
		(stks->size == 4) ? (stks->top_a = 1) : (0);
		(stks->size == 5) ? (stks->top_a = 2) : (0);
		(steps_five) ? (steps = steps_five) : (0);
		steps = ft_steps_for_3(stks, steps);
		stks->top_a = 0;
		ft_use_print_and_free(stks, &steps);
	}
	else if (incident == 3)
	{
		ft_use_print_and_free(stks, &steps_five);
		steps = ft_steps_for_3(stks, steps);
		ft_use_print_and_free(stks, &steps);
	}
	return (1);
}
