#include <string.h>
#include <stdio.h>
#include <ctype.h>

char *make_upper_case(char *str);

int	main(void)
{
	char *str;

	str = strdup("hello");
	str = make_upper_case(str);
	printf("%s\n", str);

	return (0);
}
