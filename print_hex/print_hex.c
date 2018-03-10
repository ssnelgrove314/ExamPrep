/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 19:39:30 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/03/09 20:24:30 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	char *spaces = " \t\n\r\v";
	while (*spaces)
	{
		if (c == *spaces)
			return (1);
		spaces++;
	}
	return (0);
}

int	ft_isdigit(char c)
{
	char *digit = "0123456789";
	while (*digit)
	{
		if (c == *digit)
			return (1);
		digit++;
	}
	return (0);
}

int	ft_atoi(char *s)
{
	int		sign;
	long	n;

	sign = 0;
	n = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		sign = 1;
		s++;
	}
	while (*s && ft_isdigit(*s))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	n = (sign) ? -n : n;
	return ((int)n);
}

void	print_hex(int number)
{
	char *cyper = "0123456789abcdef";
	if (number < 0)
	{
		write (1, "-", 1);
		number = number * -1;
	}
	if (number < 16)
	{
		write (1, &cyper[number], 1);
	}
	else
	{
		print_hex(number / 16);
		print_hex(number % 16);
	}
}

int main(int argc, char **argv)
{
	int hex;

	if (argc != 2)
	{
		write(1,"\n",1);
		return (0);
	}
	
	hex = ft_atoi(argv[1]);
	print_hex(hex);
	write(1, "\n", 1);
	return (0);
}
