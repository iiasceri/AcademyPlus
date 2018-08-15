/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:32:36 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:32:36 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_sort(t_list *lst, int (*cmp)())
{
	void	*tempo;
	t_list	*parcour;

	parcour = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->content, lst->next->content)) == 0)
		{
			tempo = lst->content;
			lst->content = lst->next->content;
			lst->next->content = tempo;
			lst = parcour;
		}
		else
			lst = lst->next;
	}
	lst = parcour;
	return (lst);
}
