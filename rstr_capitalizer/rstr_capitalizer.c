#include <stdio.h>
#include <unistd.h>
// checks char at pos returns 1 if its a char and the end of a word


int ft_isupper(char a)
{
	return (a >= 'A' && a <= 'Z');
}


int ft_islower(char a)
{
	return (a >= 'a' && a <= 'z');
}

//returns true if A-Z or a-Z
int	ft_isalpha(char a)
{
	return (ft_isupper(a) || ft_islower(a));
}

//changes the char a to a caplital A
char tolowercase(char a)
{
	if (ft_isupper(a))
		return (a - 'A'+'a');
	return (a);
}

//changes uppercase char to lowercase
char touppercase(char a)
{
	if (ft_islower(a))
		return (a  -'a'+'A');
	return (a);
}

int	ft_isspace(char a)
{
	return (a == ' ' || a == '\n' || a == ' ');
}

int	endwordchr(char *str, int pos)
{
	if (!str)
		return (0);
	if (!str[pos])
		return (0);
	if (!str[pos+1])
	{
		if (!ft_isspace(str[pos]))
			return (1);
		else
			return (0);
	}
	if (!ft_isspace(str[pos]) && ft_isspace(str[pos + 1]))
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
} 

void	rstr_cap(char *str)
{
	int i;

	i = 0;

	if (!str)
		return ;
	while (str[i])
	{
		if (ft_isspace(str[i]))
			ft_putchar(str[i]);
		else if (endwordchr(str, i))
			ft_putchar(touppercase(str[i]));
		else
			ft_putchar(tolowercase(str[i]));
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i++ < argc)
	{
		rstr_cap(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
