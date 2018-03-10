#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*ours;
	   
	ours = begin_list;

	counter = 0;
	if (ours == 0)
		return (0);
	counter++;
	while (ours->next)
	{
		counter++;
		ours = ours->next;
	}
	return (counter);
}
