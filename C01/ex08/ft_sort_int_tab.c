/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 01:08:38 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/18 13:51:12 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;
	int	y;

	x = 1;
	while (x < size)
	{
		swap = tab[x];
		y = x - 1;
		while (y >= 0 && tab[y] > swap)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swap;
		x++;
	}
}
//https://onlinegdb.com/pUI3rS3ux
