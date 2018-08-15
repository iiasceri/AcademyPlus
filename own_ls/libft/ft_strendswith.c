/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendswith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:49:51 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:49:52 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_strendswith(char *s1, char *s2)
{
    int     i;

    i = -1;
    while (s1[++i])
        if (s1[i] == s2[0])
            if (ft_strcmp(s1 + i, s2) == 0)
                return (1);
    return (0);
}
