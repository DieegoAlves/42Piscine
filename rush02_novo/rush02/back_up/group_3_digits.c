/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:25:45 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 18:26:36 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

char	*convert_hundreds(int num)
{
	char	*result;
	char	*hundreds;

	result = (char *)malloc(100 * sizeof(char));
	result[0] = '\0';
	hundreds = get_from_hashmap(ft_itoa(num / 100));
	if (hundreds)
	{
		ft_strcat(result, hundreds);
		ft_strcat(result, " hundred ");
	}
	return (result);
}

char	*convert_tens(int num)
{
	char	*result;
	char	*tens;

	result = (char *)malloc(100 * sizeof(char));
	result[0] = '\0';
	tens = get_from_hashmap(ft_itoa((num / 10) * 10));
	if (tens)
	{
		ft_strcat(result, tens);
		ft_strcat(result, " ");
	}
	return (result);
}

char	*convert_units(int num)
{
	char	*result;
	char	*units;

	result = (char *)malloc(100 * sizeof(char));
	result[0] = '\0';
	units = get_from_hashmap(ft_itoa(num));
	if (units)
	{
		ft_strcat(result, units);
		ft_strcat(result, " ");
	}
	return (result);
}

char	*convert_group(int num)
{
	char	*result;
	char	*temp;

	result = (char *)malloc(100 * sizeof(char));
	result[0] = '\0';
	if (num >= 100)
	{
		temp = convert_hundreds(num);
		ft_strcat(result, temp);
		free(temp);
		num %= 100;
	}
	if (num >= 20)
	{
		temp = convert_tens(num);
		ft_strcat(result, temp);
		free(temp);
		num %= 10;
	}
	if (num > 0)
	{
		temp = convert_units(num);
		ft_strcat(result, temp);
		free(temp);
	}
	return (result);
}

