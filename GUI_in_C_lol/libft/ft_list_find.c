/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:31:33 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 16:31:34 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_find(t_list *begin_list, void *content_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return (NULL);
	if ((*cmp)(begin_list->content, content_ref) == 0)
		return (begin_list);
	else if (begin_list->next)
		return (ft_list_find(begin_list->next, content_ref, cmp));
	else
		return (NULL);
}
