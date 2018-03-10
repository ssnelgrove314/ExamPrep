#include "ft_list.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *data;
	t_list list1;
	t_list list2;
	t_list list3;

	list1.next = &list2;
	list1.data = (void *)data;

	list2.next = &list3;
	list2.data = (void *)data;

	list3.next = NULL;
	list3.data = (void *)data;
	printf("%d\n", ft_list_size(&list2));
	return (0);
}
