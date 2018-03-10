#include <stdio.h>

int ft_isdigit(char c);
int	ft_isspace(char c);
int	ft_atoi(char *str);
void	print_hex(int number);

int main(void)
{
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('3'));

	printf("%d\n", ft_isspace(' '));
	printf("%d\n", ft_isspace('\t'));
	printf("%d\n", ft_isspace(' '));
	printf("%d\n", ft_isspace('1'));

  
	printf("%d\n", ft_atoi("12345"));
	printf("%d\n", ft_atoi("5"));
	printf("%d\n", ft_atoi("-12345"));
	printf("%d\n", ft_atoi("0"));

	
	printf("\n");
	print_hex(123);

	return (0);
}
