#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	while (n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}
int	main(void)
{
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(16));
	printf("%d\n", is_power_of_2(17));
}
