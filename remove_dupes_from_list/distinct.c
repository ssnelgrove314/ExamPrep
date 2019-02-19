#include <stdlib.h>

static int ss_contained(int value, int *arr, size_t arr_len)
{
	for (int i = 0; i < arr_len; i++)
		if (arr[i] == value)
			return (1);
	return (0);
}

int *distinct(const int *values, size_t count, size_t *pResultCount)
{
  int *result;
  size_t j;

  j = 0;
  result = (int *)malloc(sizeof(int) * count);
  for (size_t i = 0; i < count; i++)
  {
	  if (!ss_contained(values[i], result, j + 1))
	  {
		  result[j] = values[i];
		  j++;
	  }
  }
  *pResultCount = j;
  return (result);
}

int main(int argc, char **argv)
{
	int i;
	int *array;
	size_t res;

	array = (int *)malloc(sizeof(int) * argc - 1);
	i = 0;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		array[i] = atoi(argv[i]);
		i++;
	}
	distinct(array, i, &res);
	printf("%d\n", res);
	return (0);
}
