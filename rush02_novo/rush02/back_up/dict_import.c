/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_import.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:53:27 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 18:54:58 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*import_dict(char *dict_path)
{
	char	buffer[10000];
	int		fd;
	int		i;

	i = 0;
	fd = open (dict_path, O_RDONLY);
	if (fd == -1)
	{
		error();
		return ("\0");
	}
	read(fd, buffer, 10000);
	dict_to_array(buffer);
	return ("finalizei o import");
	close(fd);
}
