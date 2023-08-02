/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micheng <micheng@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 06:24:21 by micheng           #+#    #+#             */
/*   Updated: 2023/08/02 08:19:38 by micheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	x_vectors(int x, int i)
{
	if (i == 0)
		return (x - 1);
	else if (i == 1)
		return (x + 1);
	return (x);
}

int	y_vectors(int y, int i)
{
	if (i == 2)
		return (y - 1);
	else if (i == 3)
		return (y + 1);
	return (y);
}

int	is_obstacle(char c)
{
	if (c == '1' || c == 'E' || c == 'C' || c == 'X')
		return (1);
	return (0);
}

int	manhattan_distance(t_vars *vars, int x, int y)
{
	return (abs(x - vars->pos.x) + abs(y - vars->pos.y));
}

int	euclidean_distance(t_parent *current, t_parent *next)
{
	int	dx;
	int	dy;

	dx = current->parent_x - next->parent_x;
	dy = current->parent_y - next->parent_y;
	return (sqrt(dx * dx + dy * dy));
}
