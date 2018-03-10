int is_space(char a)
{
	return (a == ' ' || a == '\t' || a == '\n');
}

int is_start(char *s, int pos)
{
	if (pos == 0 && !(is_space(*s)))
		return (1);
	else if (is_space(s[pos - 1]) && !(is_space(*s)))
		return (1);
	return (0);
}

int	main(void)
{
	char	*start;
	int		isstart;

	start = "Hello this is a test";
	isstart = is_start(start, 1);
	return (0);
}
