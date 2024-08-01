#include "header.h"

void	dict_to_array(char *buffer)
{
	char *colon_pos;
	char *line;
	char *key;
    char *value;

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