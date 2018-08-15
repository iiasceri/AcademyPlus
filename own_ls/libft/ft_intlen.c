/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:46:20 by iiasceri          #+#    #+#             */
/*   Updated: 2018/06/15 15:46:20 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_intlen(int num)
{
    if(num >= 100000) {
        if(num >= 10000000) {
            if(num >= 1000000000) return 10;
            if(num >= 100000000) return 9;
            return 8;
        }
        if(num >= 1000000) return 7;
        return 6;
    }
    else {
        if(num >= 1000) {
            if(num >= 10000) return 5;
            return 4;
        }
        else {
            if(num >= 100) return 3;
            if(num >= 10) return 2;
        }
        return 1;
    }
}
