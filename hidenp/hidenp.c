#include <unistd.h>

char recurse(char *a, char *b)
{
	if (!*a)
		return ('1');
	if (!*b)
		return ('0');
	if (*a == *b)
		return (recurse(a + 1, b + 1));
	return (recurse(a, b + 1));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	ac;
	char **av;
	char hidden;

	ac = argc;
	av = argv;
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	hidden = recurse(av[1], av[2]);
	ft_putchar(hidden);
	ft_putchar('\n');
	return (0);
}
