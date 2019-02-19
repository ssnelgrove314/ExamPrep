#include <stdio.h>
#include <stdlib.h>

int	ft_gcd(int a, int b)
{
	if (b == 0)
		return (a);
	else
		return (ft_gcd(b, a % b));
}

int	main(int argc, char **argv)
{
	int		ac;
	char 	**av;
	int 	a;
	int		b;

	ac = argc;
	av = argv;
	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);

	printf("%d\n", ft_gcd(a, b));
	return (0);
}
