/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:29:19 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:29:19 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_create_elem(void *content)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	list->content = content;
	list->next = NULL;
	return (list);
}
