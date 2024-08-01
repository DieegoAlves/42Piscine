#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat_char(int times, char c)
{
	if (times >= 0 && times <= 25)
	{
		while (times > 0)
		{
			ft_putchar(c);
			times--;
		}
	}
}

void	repeat_alpha(char c)
{
	int	fuck;

	fuck = 0;
	if (c >= 'a' || c <= 'z')
	{
		fuck = c - 'a';
        printf("repeat char: %c\n", c);
        printf("repeat int: %i\n", fuck);
		ft_repeat_char(fuck, c);
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{	
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}