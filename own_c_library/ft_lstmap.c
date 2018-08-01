/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:49:17 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/01 17:49:19 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ptr;
	t_list *ret;
	t_list *list;

	if (lst)
	{
		ptr = f(lst);
		if ((ret = ft_lstnew(ptr->content, ptr->content_size)) == 0)
			return (0);
		list = ret;
		lst = lst->next;
		while (lst)
		{
			ptr = f(lst);
			if ((ret->next = ft_lstnew(ptr->content, ptr->content_size)) != 0)
			{
				ret = ret->next;
				lst = lst->next;
			}
			else
				return (0);
		}
		return (list);
	}
	return (0);
}
