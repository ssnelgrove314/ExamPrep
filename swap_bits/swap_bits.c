#include<stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char rev;
	int i = 0;
	rev = 0;
	while (i < 8)
	{
		rev |= octet & 1;
		rev <<= 1;
		octet >>= 1;
		i++;
	}
	return (rev);
}

int main(void)
{
	printf("%c\n", swap_bits(0b11110000));
	return (0);
}
