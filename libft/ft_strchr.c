#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	k;

	k = (char)c;
	i = 0;
	while (s[i] != k)
	{
		if (!s[i])
			return (0);
		i++;
	}
	str = (char*)s;
	return (&str[i]);
}
