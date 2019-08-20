/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispace.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 20:39:27 by maloua-h          #+#    #+#             */
/*   Updated: 2019/05/09 20:39:31 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		ft_ispace(t_flt *flt, t_coor *coor, int row, int col)
{
	int		pt;
	int		map_size;

	pt = 0;
	map_size = ft_strlen(flt->map[0]);
	while (pt < 4)
	{
		if (row + coor->coor[pt][0] >= map_size
			|| col + coor->coor[pt][1] >= map_size)
		{
			return (0);
		}
		if (flt->map[row + coor->coor[pt][0]][col + coor->coor[pt][1]] == '.')
		{
			pt++;
		}
		else
			return (0);
	}
	return (1);
}
