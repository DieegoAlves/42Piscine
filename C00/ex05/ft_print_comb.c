/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:12:03 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/12 00:00:52 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while( first <= '7' )     
	{
		second = first + 1;
		while( second <= '8' )
		{
		third = second + 1;
		while( third <= '9' )
		{
			write( 1, &first, 1 );
			write( 1, &second, 1 );
			write( 1, &third, 1 );
			third++;
			if ( first != '7' || second != '8' || third != '9' )
			{
			write( 1, ", ", 2 );
			}
		}
		second++;    
		}
	first++;    
	}
}
