#include "libft.h"

char		*ft_strjoin(char *s1, char *s2, int to_free)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		on_crash();
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	if (to_free == 1)
		free(s1);
	if (to_free == 2)
		free(s2);
	return (new);
}
