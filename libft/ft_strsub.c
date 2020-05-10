#include "libft.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = NULL;
	if (s && (ft_strlen(s) - start) >= len)
	{
		if ((new = (char *)malloc(len + 1)))
		{
			while (i < len)
			{
				new[i] = s[start + i];
				i++;
			}
			new[i] = '\0';
		}
	}
	return (new);
}
