#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	
	char *string;
	char tochange;
	char changeto;

	string = argv[1];
	tochange = argv[2][0];
	changeto = argv[3][0];

	int i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == tochange)
			ft_putchar(changeto);
		else
			ft_putchar(string[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
