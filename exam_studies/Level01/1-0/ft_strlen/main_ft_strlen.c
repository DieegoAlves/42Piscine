#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
        i++;
	return (i);
}

int main()
{
    char *test = "Diego678910";
    int res = ft_strlen(test);
    printf("%i\n", res);
    return 0;
}