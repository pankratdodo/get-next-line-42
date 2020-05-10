#include "get_next_line.h"

void		*on_crash()
{
	write(2, "Malloc error\n", ft_strlen("Malloc error\n"));
	exit(-1);
}

int 	ft_error(char *str)
{
	dprintf(2, "%s\n", str);
	return (-1);
}