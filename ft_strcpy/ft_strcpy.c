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
