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
#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>

# define HASHMAP_SIZE 1000

// basics_funcs
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char a);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

// basics_funcs_2
int		num_lines(char *buffer);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);

// basics_funcs_3
int		ft_strcmp(char *s1, char *s2);

// ft_strtok
char	*ft_strtok(char *str, const char *delim);

// find_funcs
int		ft_num_length(int num);
char	*convert_to_string(int num, int sign, int len);
int		find_number(char *buffer);
char	*ft_itoa(int num);

// dict_import
char	*import_dict(char *dict_path);

// dict_to_array
void	dict_to_array(char *buffer);

// verify
int		ft_verify_line(char *str);
int		ft_isprintable(char c);
int		verify_endline(char str);

// hashmap
void	add_to_hashmap(char *key, char *value);
void	free_hashmap(void);
char	*get_from_hashmap(char *key);
// error
void	error(void);

#endif // HEADER_H