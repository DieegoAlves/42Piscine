/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:08:32 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/14 20:12:53 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char value);

void	print_up(int x)
{
	int	middle_up;

	middle_up = x - 2;
	if (x > 2)
	{
		ft_putchar('A');
		while (middle_up > 0)
		{
			ft_putchar('B');
			middle_up--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

int	g_wall_side;
int	g_empty_space;

void	print_middle(int x, int y)
{
	g_wall_side = y - 2;
	while (g_wall_side > 0)
	{
		if (x == 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
			g_wall_side--;
		}
		if (x >= 2)
		{
			g_empty_space = x - 2;
			ft_putchar('B');
			while (g_empty_space > 0)
			{	
				ft_putchar(' ');
				g_empty_space--;
			}
			ft_putchar('B');
			ft_putchar('\n');
			g_wall_side--;
		}	
	}
}

void	print_down(int x)
{
	int	middle_down;

	middle_down = x - 2;
	if (x > 2)
	{
		ft_putchar('C');
		while (middle_down > 0)
		{
			ft_putchar('B');
			middle_down--;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x == 2)
	{
		ft_putchar('C');
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
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
