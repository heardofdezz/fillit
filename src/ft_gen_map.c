/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 20:39:12 by maloua-h          #+#    #+#             */
/*   Updated: 2019/05/09 20:39:16 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int			ft_gen_map(char ***map, size_t size)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!(*map = (char**)ft_memalloc(sizeof(char*) * (size + 1))))
		return (0);
	(*map)[size] = NULL;
	while (++i < (int)size)
	{
		if (!((*map)[i] = ft_strnew(sizeof(char) * (size + 1))))
			return (0);
		while (++j < (int)size)
		{
			(*map)[i][j] = '.';
		}
		(*map)[i][j] = '\0';
		j = -1;
	}
	return (1);
}
