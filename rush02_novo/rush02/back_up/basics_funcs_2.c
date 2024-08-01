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

#include "header.h"

int	num_lines(char *buffer)
{
	int	i;
	int	num_lines;

	num_lines = 1;
	i = 0;
	while (*buffer != '\0')
	{
		if (*buffer == '\n')
		{
			num_lines++;
		}
		buffer++;
	}
	return (num_lines);
}

char	*ft_strdup(char *src)
{
	size_t	len = ft_strlen(src);
	char	*dest = (char *)malloc(len + 1);

	if (!dest)
	{
		return (src);
	}
	ft_strcpy(dest, src);
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
