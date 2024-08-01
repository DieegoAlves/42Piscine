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

// void	new_key(char *buffer, int *keys)
// {
// 	int	i;
// 	char temp[100];

// 	i = 0;
// 	while (i < num_lines(buffer))
// 	{
// 		if (verify_endline(*buffer) != 0)
// 		{
// 			temp[i] = buffer[i];
// 			printf("temp %i no if: %c\n", i, temp[i]);
// 			keys[i] = ft_atoi(temp);
// 			printf("keys: %i\n", keys[i]);
// 			printf("temp: %s\n", temp);
// 		}
// 		while (find_number(buffer))
// 		i++;
// 	}
// }

// char *key_number(char *buffer)
// {
// 	printf("entrei no keynumber\n");
// 	int	i;
// 	char *number;

// 	i = 0;
// 	printf("buffer: %c\n", *buffer);
// 	while ((verify_endline(*buffer)) == 1)
// 	{
// 		printf("buffer: %c\n", *buffer);
// 		number = buffer;
// 		printf("number %i: %s\n", i, number);
// 		buffer++;
// 		number++;
// 		i++;
// 	}
// 	printf("saindo do keynumber\n");
// 	return (number);
// }

char *ft_strdup(char *src) 
{
    size_t len = ft_strlen(src);
    char *dest = (char *)malloc(len + 1);
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

char *ft_strchr(const char *str, int c) 
{
    // Percorre a string até encontrar o caractere ou o final da string
    while (*str != '\0') 
	{
        if (*str == (char)c) 
		{
            return ((char *)str); // Converte o ponteiro const char* para char* antes de retornar
        }
        str++;
    }
    // Verifica se o caractere procurado é o caractere nulo ('\0')
    if (c == '\0') 
	{
        return ((char *)str);
    }
    // Se o caractere não foi encontrado, retorna NULL
    return (NULL);
}