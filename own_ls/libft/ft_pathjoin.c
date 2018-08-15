/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:48:24 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:48:25 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_pathjoin(char *p1, char *p2)
{
    if (!ft_strendswith(p1, "/"))
        return (ft_strjoin(ft_strjoinch(p1, '/'), p2));
    return (ft_strjoin(p1, p2));
}
