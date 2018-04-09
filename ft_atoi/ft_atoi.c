#include <unistd.h>

int	ft_isdigit(char s)
{
	char *str = "0123456789";
	while (*str)
	{
		if (s == *str)
			return (1);
		str++;
	}
	return (0);
}

int	ft_isspace(char s)
{
	char *str = " \t\r\v\f\r\n";
	while (*str)
	{
		if (s == *str)
			return (1);
		str++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long	retval;
	long	signval;
	char	*s;

	retval = 0;
	signval = 0;
	s =(char *)str;
	while (ft_isspace(*s))
		s++;
	if (*s == '+')
		s++;
	if (*s == '-')
	{
		signval = 1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		retval = retval * 10 + (*s - '0');
		s++;
	}
	return (signval ? (int)-retval : (int)retval);
}
