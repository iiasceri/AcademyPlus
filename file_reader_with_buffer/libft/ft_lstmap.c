/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:17:13 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:17:14 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *dest_next;
	t_list *dest_cap;

	if (lst == NULL)
		return (NULL);
	dest_cap = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (dest_cap == NULL)
		return (NULL);
	dest_next = dest_cap;
	lst = lst->next;
	while (lst != NULL)
	{
		dest_next->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
		if (dest_next == NULL)
			return (NULL);
		lst = lst->next;
		dest_next = dest_next->next;
	}
	return (dest_cap);
}
