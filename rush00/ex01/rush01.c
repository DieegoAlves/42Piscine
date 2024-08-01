/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:51:23 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/14 20:24:06 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char value);

void	print_up(int x)
{
	int	middle_up;

	if (x > 2)
	{
		middle_up = x - 2;
		ft_putchar('/');
		while (middle_up > 0)
		{
			ft_putchar('*');
			middle_up--;
		}
		ft_putchar('\\');
		ft_putchar('\n');
	}
	if (x == 2)
	{
		ft_putchar('/');
		ft_putchar('\\');
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
}

void	print_line(int x)
{
	int	empty_space;

	ft_putchar('*');
	if (x >= 2)
	{
		empty_space = x - 2;
		while (empty_space > 0)
		{
			ft_putchar(' ');
			empty_space--;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	print_middle(int x, int y)
{
	int	wall_side;

		wall_side = y - 2;
	while (wall_side > 0)
	{
		if (x == 1 || x >= 2)
		{
			print_line(x);
			wall_side--;
		}
	}
}

void	print_down(int x)
{
	int	middle_down;

	if (x > 2)
	{
		middle_down = x - 2;
		ft_putchar('\\');
		while (middle_down > 0)
		{
			ft_putchar('*');
			middle_down--;
		}
		ft_putchar('/');
		ft_putchar('\n');
	}
	if (x == 2)
	{
		ft_putchar('/');
		ft_putchar('\\');
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "\n", 1);
		write(1, "One is the minimum value acceptable!\n", 37);
		write(1, "\n", 1);
		return ;
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
		return ;
	}
	if (y == 1 && x > 1)
	{
		print_up(x);
		return ;
	}
	print_up(x);
	if (y < 2)
	{
		return ;
	}
	print_middle(x, y);
	print_down(x);
}
