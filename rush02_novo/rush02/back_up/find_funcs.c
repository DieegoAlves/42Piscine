/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:05:30 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 19:06:21 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	find_number(char *buffer)
{
	while (*buffer != '\0')
	{
		if (*buffer >= '0' && *buffer <= '9')
			return (1);
		buffer++;
	}
	return (0);
}

int	ft_num_length(int num)
{
	int		len;

	len = 0;
	if (num <= 0)
		len = 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*convert_to_string(int num, int sign, int len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[--len] = sign * (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int num)
{
	int		len;
	int		sign;

	len = ft_num_length(num);
	if (num < 0)
		sign = -1;
	else
		sign = 1;
	return (convert_to_string(num, sign, len));
}
