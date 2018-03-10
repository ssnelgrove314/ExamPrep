#include <stdio.h>
#include <stdlib.h>
// count length of string
int ft_strlen(char *str)
{
	int count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
// is that char space?
int is_space(char a)
{
	char *spaces= " \r\n\v\t\f";
	while (*spaces)
	{
		if (*spaces==a)
			return (1);
		spaces++;
	}
	return 0;
}

// if that position is begining of the word
int is_start(char *s, int pos)
{
	if (pos < 0 || ft_strlen(s) - 1 < pos)
		return (0);
	if (pos == 0 && !(is_space(*s)))
		return (1);
	else if (is_space(s[pos - 1]) && !(is_space(s[pos])))
		return (1);
	return (0);
}

// if that position is end of word
int is_end(char *s, int pos)
{
	int slen;

	slen = ft_strlen(s);

	if (pos < 0 || slen < pos)
		return (0);
	if (pos == slen - 1 && !(is_space(slen -1)))
		return (1);
	else if (is_space(s[pos + 1]) && !(is_space(s[pos])))
		return (1);
	return (0);
}

//copies 1 word from string src to string dst
char	*ft_wordcpy(char *dst, char *src)
{
	int pos;

	pos = 0;
	while (!is_end(src,pos))
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos ] = src[pos];
	dst[pos+1]=0;
	return (dst);
}

/*
char	**ft_split(char *str)
{
	char	**split_str;
	char	*word;
	int		slen;
	int		pos;

	slen = ft_strlen(str);
	split_str = (char **)malloc(sizeof(char) * slen);

	if (is_start(word, pos))
		strcpy(word, str_split[pos]);
	pos++;
} */

int main(void)
{
	char *str;
	char *word;
	int index;

	int	start;
	int	end;
	
	str = "This is a test";
	index = 10;
	char dst[1000];
//	start = is_start(str, index);
//	end = is_end(str, index);
	ft_wordcpy(dst, str + index);

//	printf("%d\n", is_start(str, index));
//	printf("%d\n", is_end(str, index));


	printf("%s\n", dst);
	
	return (0);
}
