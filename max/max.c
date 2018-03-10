#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int temp;
	if (!tab)
		return (0);
	if (len == 1)
		return (*tab);
	if (len == 0)
		return (0);
	temp = tab[0];
	while (len--)
	{
		if (tab[len] > temp)
			temp = tab[len];
	}
	return (temp);
}

int	main(void)
{
	int *test;
	test = 0;	
	
	printf("%d\n", max((int *)test, 35));
	printf("%d\n", max((int *)test, 55));
	printf("%d\n", max((int *)test, 5));
	printf("%d\n", max((int *)test, 5));
	printf("%d\n", max((int *)test, 5));

	return (0);
}
