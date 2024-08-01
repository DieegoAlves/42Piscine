/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:56:24 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 18:59:34 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	dict_to_array(char *buffer)
{
	char	*colon_pos;
	char	*line;
	char	*key;
	char	*value;

	line = ft_strtok(buffer, "\n");
	while (line != NULL)
	{
		colon_pos = ft_strchr(line, 58);
		if (colon_pos != NULL)
		{
			*colon_pos = '\0';
			key = line;
			value = colon_pos + 1;
			while (*value == ' ')
			{
				value++;
			}
			add_to_hashmap(key, value);
		}
		line = ft_strtok(NULL, "\n");
	}
	buffer++;
}
