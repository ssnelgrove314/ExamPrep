#define REM_DIGITS (m / 10)
#define LAST_DIGIT (m % 10)

#include <stdlib.h>
#include <stdio.h>

static void seven_helper(long long m, int *count, int *res)
{
	if (m < 100)
	{
		*res = m;
		*count += 1;
		return ;
	}
	m = REM_DIGITS - (2 * LAST_DIGIT);
	*count += 1;
	seven_helper(m, count, res);
}

int* seven(long long m)
{
	int *res_arr;
	int res;
	int count;

	count = 0;
	res = 0;
	res_arr = (int *)malloc(sizeof(int) * 2);
	seven_helper(m, &count, &res);
	res_arr[0] = res;
	res_arr[1] = count;
	return (res_arr);
}

int main(void)
{
	int *test;
	long long m;

	m = 477557101;
	test = seven(m);
	printf("%d, %d\n", test[0], test[1]);
	return (0);
}
