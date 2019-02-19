#include <unistd.h>

void	aff_a(char *str)
{
	while (*str)
	{
		if (*str == 'a')
		{
			write (1, "a\n", 2);
			return ;
		}
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	aff_a(argv[1]);
	return (0);
}


//Display the first 'a' in (argv[1]) followed by '\n'
//If there is no 'a' in (argv[1]) display '\n'
//if the number of params in not one (argc != 2) write 'a' follwed by '\n'

void	aff_a(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'a')
		{
			write(1, "a\n", 2);
			return ;
		}
		str++;
	}
	write(1, "\n", 1);
}
