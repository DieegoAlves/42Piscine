/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:54:35 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/21 21:54:41 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	string_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	size_grid(char *str)
{
	int	i;

	i = 4;
	while (i <= 6)
	{
		if (ft_strlen(str) == (i * 4 * 2 - 1))
			return (i);
		i++;
	}
	return (0);
}

int	**make_clues(int **clues, int size)
{
	int	i;

	clues = (int **)malloc(sizeof(int *) * 4);
	if (!clues)
		return (0);
	i = 0;
	while (i < 4)
	{
		clues[i] = (int *)malloc(sizeof(int) * size);
		if (!clues[i])
			return (0);
		i++;
	}
	return (clues);
}

int	**add_clues(char *str, int **clues, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		else
		{
			clues[(i - j) / size][(i - j) % size] = str[i] - 48;
			i++;
			if (str[i] != ' ' && str[i] != '\0')
				return (0);
			else
			{
				if (str[i])
					i++;
				j++;
			}
		}
	}
	return (clues);
}

int	**input_clues(char *str)
{
	int	**clues;
	int	size;

	size = size_grid(str);
	clues = 0;
	if (size)
	{
		clues = make_clues(clues, size);
		clues = add_clues(str, clues, size);
		return (clues);
	}
	else
		return (0);
}
