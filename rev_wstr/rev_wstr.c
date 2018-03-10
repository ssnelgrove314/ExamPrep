#include <unistd.h>

int	ft_strlen(char *str)
{
	int count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_isspace(char c)
{
	return (c == ' ');
}

int	wordstart(char *str, int index)
{
	if (!ft_isspace(str[index]))
		if (index == 0 || ft_isspace(str[index - 1]))
			return (1);
	return (0);
}

int	wordend(char *str, int index)
{
	if (!ft_isspace(str[index]))
	{
		if (!str[index + 1])
			return (1);
		if (ft_isspace(str[index + 1]))
			return(1);
	}
	return (0);
}

void	printword(char *str, int index)
{
	if (wordstart(str, index))
	{
		if (wordend(str, index))
			write(1, &str[index], 1);
		else
		{
			while (!wordend(str, index))
				write(1, &str[index++], 1);
			write(1, &str[index], 1);
		}
	}
}

int	main(int argc, char **argv)
{
	char *str;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	str = argv[1];
	int len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		if (wordstart(str, len))
		{
			printword(str, len);
			if (len != 0)
				write(1, " ", 1);
		}
		len--;
	}
	write(1, "\n", 1);
}
