/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 20:38:58 by maloua-h          #+#    #+#             */
/*   Updated: 2019/05/09 20:39:01 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_free_tetri(t_flt *flt)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (flt->tetri[++i])
	{
		while (flt->tetri[i][++j])
		{
			free(flt->tetri[i][j]);
		}
		free(flt->tetri[i]);
		j = -1;
	}
	free(flt->tetri);
}

void	ft_free_list(t_coor **begin_coor)
{
	t_coor	*current;
	t_coor	*next;

	current = *begin_coor;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	begin_coor = NULL;
}

void	ft_free_map(t_flt *flt)
{
	int		i;

	i = -1;
	while ((flt->map)[++i])
	{
		ft_strdel(&(flt->map[i]));
	}
	free(flt->map);
}
