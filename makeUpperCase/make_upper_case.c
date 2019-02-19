#include <string.h>
#include <ctype.h>

char *make_upper_case(char *str)
{
	char *temp;

	if (!str || !*str)
		return (NULL);
	temp = str;
	while (*temp)
	{
		*temp = toupper((unsigned char) *temp);
		temp++;
	}
	return (str);
}
