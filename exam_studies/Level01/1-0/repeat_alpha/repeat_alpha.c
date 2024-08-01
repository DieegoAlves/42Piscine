/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:23:21 by dalves-f          #+#    #+#             */
/*   Updated: 2024/07/25 22:38:50 by dalves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_repeat(char c)
{
	if (c >= 0 && c <= 26)
	{
		c = 
	}
}

void	repeat_alpha(char c)
{
	if (c >= 'a' || c <= 'z')
	{
		c = c - 'a';
		ft_print_repeat(c);
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{	
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
