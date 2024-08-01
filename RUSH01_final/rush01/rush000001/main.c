/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:51:02 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/21 21:51:43 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**input_clues(char *str);
int		verify_height(int **grid, int tab[], int height);
int		verify_left_line(int **grid, int clue, int tab[], int height);
int		verify_right_line(int **grid, int clue, int tab[], int height);
int		verify_up_line(int **grid, int clue, int tab[], int height);
int		verify_down_line(int **grid, int clue, int tab[], int height);
int		size_grid(char *str);
void	print_grid(int **grid, int size);
int		**fill_grid(int **grid, int size);
int		**add_grid(int **grid, int size);

int	*empty_verify(int **grid, int size)
{
	int	row;
	int	col;
	int	*res;

	res = (int *)malloc(sizeof(int) * 2);
	if (!res)
		return (0);
	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			if (grid[row][col] == 0)
			{
				res[0] = row;
				res[1] = col;
				return (res);
			}
			col++;
		}
		row++;
	}
	return (0);
}

int	finish_grid(int **grid, int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			if (grid[row][col] == 0)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int	verify(int **grid, int **clues, int tab[], int height)
{
	if (!verify_height(grid, tab, height))
	{
		return (0);
	}
	if (!verify_left_line(grid, clues[2][tab[0]], tab, height))
	{
		return (0);
	}
	if (!verify_right_line(grid, clues[3][tab[0]], tab, height))
	{
		return (0);
	}
	if (!verify_up_line(grid, clues[0][tab[1]], tab, height))
	{
		return (0);
	}
	if (!verify_down_line(grid, clues[1][tab[1]], tab, height))
	{
		return (0);
	}
	return (1);
}

int	**solve(int **grid, int **clues, int size)
{
	int	*zero_index;
	int	i;
	int	tab[3];

	if (finish_grid(grid, size))
	{
		return (grid);
	}
	zero_index = empty_verify(grid, size);
	tab[0] = zero_index[0];
	tab[1] = zero_index[1];
	tab[2] = size;
	i = 1;
	while (i <= size)
	{
		if (verify(grid, clues, tab, i))
		{
			grid[zero_index[0]][zero_index[1]] = i;
			if (solve(grid, clues, size))
				return (grid);
			grid[zero_index[0]][zero_index[1]] = 0;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	**clues;
	int	size;

	if (argc == 2)
	{
		size = size_grid(argv[1]);
		clues = input_clues(argv[1]);
		grid = 0;
		grid = add_grid(grid, size);
		grid = fill_grid(grid, size);
		if (clues)
			grid = solve(grid, clues, size);
		if (!grid || !clues)
			write(1, &"Error\n", 6);
		else
			print_grid(grid, size);
	}
	else
		write(1, &"Error\n", 6);
}
