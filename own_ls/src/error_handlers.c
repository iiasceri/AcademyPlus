/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:40:40 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:40:41 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void        error_handler(int err, t_etarget target)
{
    if (err == FLAG_ERR) {
        print_handler(2, "ls: illegal option -- %c\n", 0, &target.flag);
        print_handler(2, "usage: ls [-ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1] [file ...]\n", 0, NULL);
        print_handler(2, "Try 'ls --help' for more information.\n", 0, NULL);
        exit(1);
    }
    else if (err == NONEXISTENT_ERR)
        print_handler(2, "ls: %s: No such file or directory\n", 0, target.file);
    else
        print_handler(2, "ls: %s: Permission denied\n", 0, target.file);
}
