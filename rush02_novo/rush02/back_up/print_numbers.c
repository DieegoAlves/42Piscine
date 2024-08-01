/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics_funcs_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:34:18 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 18:46:44 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <header.h>

void	print_number_as_words(char *num_str)
{
	char	*result;

	if (!is_valid_number(num_str))
	{
		error();
		return ;
	}
	result = convert_number(num_str);
	if (result)
	{
		ft_putstr(result);
		ft_putchar('\n');
		free(result);
	}
}

static bool	is_valid_number(char *num_str)
{
	int	i;

	i = 0;
	while (num_str[i])
	{
		if (!ft_isdigit(num_str[i]))
			return (false);
		i++;
	}
	return (true);
}
