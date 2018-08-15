/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:41:21 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:41:21 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int is_last_dir(t_dirs *dirs)
{
  t_dirs *tmp;

  tmp = dirs->next;
  while (tmp)
  {
    if (tmp->status == IS_DIR)
      return (0);
    tmp = tmp->next;
  }
  return (1);
}

int is_last_nondir(t_dirs *dirs)
{
  t_dirs *tmp;

  tmp = dirs->next;
  while (tmp)
  {
    if (tmp->status == IS_NOTDIR)
      return (0);
    tmp = tmp->next;
  }
  return (1);
}

int has_dirs(t_dirs *dirs)
{
  t_dirs *tmp;

  tmp = dirs;
  while (tmp)
  {
    if (tmp->status == IS_DIR)
      return (1);
    tmp = tmp->next;
  }
  return (0);
}

t_format get_nondir_format(t_dirs **dirs, t_flags flags)
{
  t_format format;
  t_dirs *tmp;
  int format_option;

  tmp = *dirs;
  format_option = INIT_FORMAT;
  while (tmp)
  {
    if (tmp->status == IS_NOTDIR)
    {
      add_file(&tmp->self, &tmp, flags, INIT_FORMAT);
      if (flags & LONG_LISTING_FLAG)
        format_handler(&format, tmp->self, format_option);
      format_option = UPDATE_FORMAT;
    }
    tmp = tmp->next;
  }
  return (format);
}
