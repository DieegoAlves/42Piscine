/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:07:32 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 19:51:47 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static char	*current_position;

static bool	ft_delimiter(char c, const char *delim)
{
	while (*delim)
	{
		if (c == *delim)
			return (true);
		delim++;
	}
	return (false);
}

char	*ft_strtok(char *str, const char *delim)
{
	char	*token_start;

	if (str != NULL)
		current_position = str;
	else if (current_position == NULL)
		return (NULL);
	while (ft_delimiter(*current_position, delim))
		current_position++;
	if (*current_position == '\0')
		return (NULL);
	token_start =  current_position;
	while (*current_position && !ft_delimiter(*current_position, delim))
		current_position++;
	if (*current_position)
	{
		*current_position = '\0';
		current_position++;
	}
	return (token_start);
}
