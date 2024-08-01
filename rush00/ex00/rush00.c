/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:08:32 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/13 16:24:56 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char value);

void	print_up(int x)
{
	int	middle_up;

	if (x > 0)
	{
		ft_putchar('o');
		if (x > 1)
		{
			middle_up = x - 2;
			while (middle_up > 0)
			{
				ft_putchar('-');
				middle_up--;
			}
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	print_middle(int x, int y)
{
	int	wall_side;
	int	empty_space;

	wall_side = y - 2;
	empty_space = x - 2;
	while (wall_side > 0)
	{
		if (x >= 1)
		{
			ft_putchar('|');
			if (x >= 2)
			{
				while (empty_space > 0)
				{
					ft_putchar(' ');
					empty_space--;
				}
				ft_putchar('|');
			}
			ft_putchar('\n');
		}
		wall_side--;
	}
}

void	print_down(int x)
{
	int	middle_down;

	if (x > 0)
	{
		ft_putchar('o');
		if (x > 1)
		{
			middle_down = x - 2;
			while (middle_down > 0)
			{
				ft_putchar('-');
				middle_down--;
			}
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
	print_up(x);
	if (y > 1)
	{
		print_middle(x, y);
	}
	if (y > 1)
	{
		print_down(x);
	}
}
// x = largura ou linha
// y = altura ou coluna