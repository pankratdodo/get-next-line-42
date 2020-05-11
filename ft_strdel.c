#include "get_next_line.h"

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = 0;
	}
}
