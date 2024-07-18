/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 00:49:56 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/18 13:34:30 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = temp;
		size--;
		i++;
	}
}
//https://onlinegdb.com/iRfWdXgAq
