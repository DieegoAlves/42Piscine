/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:53:56 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/21 21:54:17 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int	size_grid(char *str);

int	**fill_grid(int **grid, int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}

int	**add_grid(int **grid, int size)
{
	int	row;

	grid = (int **)malloc(sizeof(int *) * size);
	if (!grid)
		return (0);
	row = 0;
	while (row < size)
	{
		grid[row] = (int *)malloc(sizeof(int) * size);
		if (!grid[row])
			return (0);
		row++;
	}
	return (grid);
}
