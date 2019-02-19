#include <unistd.h>
#include <stdio.h>

void	ft_putdigit(char num)
{
	num += '0';
	write(1, &num, 1);
}

void	ft_printnl(void)
{
	write(1, "\n", 1);
}

void	itoa(int num)
{
	if (num > 0)
	{
		itoa(num / 10);
		ft_putdigit(num % 10);
	}
}

int	atoi(char *str)
{
	int num;
	int digit;

	num = 0;
	while (*str)
	{
		digit = *str - '0';
		num = num*10 + digit;
		str++;
	}
	return (num);
}

void	printtemplate(int i, int num)
{
	itoa(a);
	write(1," x ",3);
	itoa(num);
	write(1," = ",3);
	itoa(num * i);
	ft_printnl();
}

void	printtable(int num)
{
	int i;
	i = 0;

	while (i++ < 9)
		printtemplate(i, num);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_printnl();
		return (0);
	}
	printtable(atoi(argv[1]));
	return (0);
}
