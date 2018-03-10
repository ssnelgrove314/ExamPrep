#include "do_op.h"


void	do_op(int first, char op, int second)
{
	if (op == '+')
		printf("%d\n", first + second);
	else if (op == '-')
		printf ("%d\n", first - second);
	else if (op == '/')
	{
		if (second == 0)
		{
			printf("Err, divide by zero\n");
		}
		else
			printf ("%d\n", first / second);
	}
	else if (op == '*')
		printf ("%d\n", first * second);
	else if (op == '%')
		printf ("%d\n", first % second);
	else
		printf ("Not a valid op\n");
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		printf("\n");
	else
		do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	return (0);
}
