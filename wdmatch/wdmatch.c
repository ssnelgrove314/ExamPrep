#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	iscontained(char *first, char *second, int lvl)
{
	if (!(*first))
		return (1);
	if (!(*second))
		return (0);
	if (*first == *second)
	{
			return (iscontained(first+1, ++second,lvl++));
	}
	second++;
	return (iscontained(first, second,lvl++));
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
	{
		if (iscontained(argv[1], argv[2],0))
			ft_putstr(argv[1]);
		else
			ft_putchar('\n');
	}
	return (0);
}
