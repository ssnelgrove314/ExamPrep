#include <stdio.h>
int ft_isspace(char c);
int wordstart(char *str, int index);
int wordend(char *str, int index);
void	printword(char *str, int index);

int main(void)
{
	char *str;

	str = "This is a test";
	printf("%d\n", wordstart(str, 0));
	printf("%d\n", wordstart(str, 3));
	printf("%d\n", wordstart(str, 5));
	printf("%d\n", wordstart(str, 8));
	
	printf("\n");

	printf("%d\n", wordend(str, 3));
	printf("%d\n", wordend(str, 6));
	printf("%d\n", wordend(str, 5));
	printf("%d\n", wordend(str, 13));

	printf("\n");

	printword(str, 0);
	printf("\n");
	printword(str, 5);
	printf("\n");
	printword(str, 8);
	printf("\n");
	printword(str, 12);
	return (0);

}
