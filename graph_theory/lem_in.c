/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:47:39 by iiasceri          #+#    #+#             */
/*   Updated: 2018/04/02 12:47:40 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_simulate(int **paths, int furn, int end, int8_t param)
{
	FS;
	while (sim[end] != f_temp && (i = -1))
	{
		while (*(paths + ++i) && (j = paths[i][0] + 1))
		{
			while (--j > 1)
				if (sim[paths[i][j]] == i + 1 && paths[i][j] != end)
				{
					if (paths[i][j + 1] == end)
					{
						C1;
					}
					else if (sim[paths[i][j + 1]] == 0 && paths[i][j] != end)
					{
						C2;
					}
				}
			CHECK;
		}
		TO_PRINT;
	}
	free(sim);
	return (step);
}

int	main(void)
{
	int start;
	int end;

	VAR_INIT_1;
	head = get_farm(&furn);
	if (!g_rel)
		ft_error();
	ft_check_possible(head);
	ft_get_start_end(head, &start, &end, -1);
	ft_create_d_path();
	g_p = 0;
	dijkstra(g_d, start, end);
	if (!ft_check_solution_1(start, end, g_path))
		ft_error();
	ft_print_farm(furn, head);
	ft_free_list(&head);
	lem_in(start, end, furn);
}
