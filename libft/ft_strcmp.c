#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *str;
	unsigned char *src;

	str = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (*str == *src && *str)
	{
		str++;
		src++;
	}
	return (*str - *src);
}
