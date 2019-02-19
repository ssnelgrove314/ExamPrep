#include <unistd.h>

//lower
//upper
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void	ft_write_rev_case(char *str)
{
	char temp;

	while (*str)
	{
		if (ft_islower(*str))
		{
			temp = *str - 'a' + 'A';
			ft_putchar(temp);
		}
		else if (ft_isupper(*str))
		{
			temp = *str - 'A' + 'a';
			ft_putchar(temp);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc !=2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_write_rev_case(argv[1]);
	ft_putchar('\n');
	return (0);
}
