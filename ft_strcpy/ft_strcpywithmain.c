#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char *dst;
	char *src;

	dst = s1;
	src = s2;
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (s1);
}

int main(void)
{
	char dst[100];
	char dst2[100];
	printf("%s, %s \n", ft_strcpy(dst, "hi"), strcpy(dst2, "hi"));
}
