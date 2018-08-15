/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subdir_handlers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:41:18 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:41:19 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_dirs *subdir_handler(t_dirs *next, t_dirs **sub_dirs, t_flags flags)
{
  t_dirs *tmp;

  if (!*sub_dirs)
    return (next);
  dir_sort(sub_dirs, flags);
  if (flags & REVERSE_FLAG)
    reverse_dirs(sub_dirs);
  tmp = *sub_dirs;
  while (tmp->next) {
    tmp = tmp->next;
  }
  tmp->next = next;
  return (*sub_dirs);
}
