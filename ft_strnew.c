#include "get_next_line.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if ((size + 1) == 0)
		return (0);
	if (!(str = (char *)malloc((size + 1) * sizeof(*str))))
		on_crash();
	while (size + 1)
	{
		str[size] = '\0';
		size--;
	}
	return (str);
}
