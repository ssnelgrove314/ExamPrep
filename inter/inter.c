#include <stdio.h>
//checks to see if the character b is contained in the string str
//returns 1 if contained, otherwise 0
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

//takes a pointer to a string and sees if a character b is in it after str[pos]
int ft_contains(char *str , char b)
{
	if (!str || !b)
		return (0);
	while (*str != '\0')
	{
		if (*str == b)
			return (1);
		str++;
	}
	return (0);
}

//function searches backwards from pos to see if char at post is contained twice
int	ft_containsdouble(char *str, int pos)
{
	char search=str[pos];
    int i;

	i = 0;
	while (str[i] && i<pos)
	{
		if (str[i]==search)
			return(1);
		i++;
	}
	return(0);
}

void ft_inter(char *firststr, char *secondstr)
{
	char *first;
	char *sec;
	int i;

	i = 0;
	first = firststr;
	sec = secondstr;
	if (!first || !sec)
		return ; 
	while (first[i] != '\0')
	{
		if (ft_contains(sec, first[i]))
		{
			if (!ft_containsdouble(first, i))
				ft_putchar(first[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_inter(argv[1], argv[2]);
	return (0);	
}
