/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:08:32 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/13 03:42:25 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char value);

void print_up(int x)
{
	if(x > 2)
	{
		int middle_up;

		middle_up = x - 2;
		ft_putchar('A');
		while(middle_up > 0)
		{
			ft_putchar('B');
			middle_up--;	
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	if(x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
		ft_putchar('\n');
	}
	if(x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void print_middle(int x, int y)
{
	int 	wall_side;
	

	wall_side = y - 2;
	while(wall_side > 0)
	{
		if(x == 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
			wall_side--;
		}
		if(x >= 2)
		{:w
			int		empty_space;

			empty_space = x - 2;
			ft_putchar('B');
			while(empty_space > 0)
			{	
				ft_putchar(' ');
				empty_space--;
			}
			ft_putchar('B');
			ft_putchar('\n');
			wall_side--;
		}	
	}
}

void print_down(int x)
{
	if(x > 2)
	{
		int	middle_down;

		middle_down = x - 2;
		ft_putchar('C');
        while(middle_down > 0)
		{
			ft_putchar('B');
			middle_down--;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
	if(x == 2)
	{
		ft_putchar('C');
		ft_putchar('A');
		ft_putchar('\n');
	}
	if(x == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if(x == 0 || y == 0)
	{
		printf("\n");
		printf("One is the minimum value acceptable!\n");
		printf("\n");
		printf("\n");
		printf("#VAI CORINTHIANS!!!\n");
		printf("#VAI CORINTHIANS!!!\n");
		printf("#VAI CORINTHIANS!!!\n");
		printf("\n");
		return;
	}
	if(x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return;
	}
	if (y == 1 && x > 1)
	{
		print_up(x);
		return;
	}
	print_up(x);
	if(y < 2)
	{
		return;
	}
	print_middle(x, y);
	print_down(x);	
}
