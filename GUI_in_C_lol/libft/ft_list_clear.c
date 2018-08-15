/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:31:29 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:31:29 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list != NULL)
	{
		ft_list_clear(&((*begin_list)->next));
		free(*begin_list);
		*begin_list = NULL;
	}
}
