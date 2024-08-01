#include "header.h"

int	find_number(char *buffer)
{
	while (*buffer != '\0')
    {
        if (*buffer >= '0' && *buffer <= '9')
        {
            return (1);
        }
        buffer++;
    }
    return (0);
}