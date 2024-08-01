#ifndef HEADER_H
#define HEADER_H

// Libraries
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

#define HASHMAP_SIZE 1000

// basics_funcs
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char a);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

// basics_funcs_2
int		num_lines(char *buffer);
char	*ft_strchr(const char *str, int c);
char    *ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);

// basics_funcs_3
int	ft_strcmp(char *s1, char *s2);

// ft_strtok
char *ft_strtok(char *str, const char *delim);

// find_funcs
int find_number(char *buffer);

// dict_import
char    *import_dict(char *dict_path);

// dict_to _array
void    dict_to_array(char *buffer);

// verify
int	ft_verify_line(char *str);
int	ft_isprintable(char c);
int	verify_endline(char str);

// hashmap
unsigned int hash(char *key);
void add_to_hashmap(char *key, char *value);
void free_hashmap();
char *get_from_hashmap(char *key);




// error
void	error(void);

#endif //	HEADER_H