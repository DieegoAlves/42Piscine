#include "header.h"

int	ft_verify_line(char *str)
{
	if (*str >= '0' && *str <= '9')
		while (*str >= '0' && *str <= '9')
			str++;
	else
		return (0);
	if (*str == ' ' || *str == ':')
		while (*str == ' ')
			str++;
	else
		return (0);
	if (*str == ':')
		str++;
	else
		return (0);
	while (*str == ' ')
		str++;
	if (ft_isprintable(*str))
		while (ft_isprintable(*str))
			str++;
	else
		return (0);
	if (*str == '\0')
		return (1);
	else
		return (0);
}

int	ft_isprintable(char c)
{
	if (!(c < 32 || c > 126))
		return (1);
	return (0);
}

int	verify_endline(char str)
{
	if (str == ' ' || str == ':')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}