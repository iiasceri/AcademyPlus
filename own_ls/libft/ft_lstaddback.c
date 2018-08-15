/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:47:17 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:47:18 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
    t_list  *tmp;
    t_list  *head;

    tmp = *alst;
    head = tmp;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
	*alst = head;
}
