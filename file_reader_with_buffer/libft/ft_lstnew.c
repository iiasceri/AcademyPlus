/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 17:18:36 by iiasceri          #+#    #+#             */
/*   Updated: 2017/12/31 17:18:37 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (newlst == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
		return (newlst);
	}
	newlst->content = malloc(content_size);
	newlst->content = ft_memcpy(newlst->content, content, content_size);
	if (newlst->content == NULL)
		return (NULL);
	newlst->content_size = content_size;
	newlst->next = NULL;
	return (newlst);
}
