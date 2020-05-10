#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "../get_next_line.h"

char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);
void				ft_strdel(char **as);
char				*ft_strjoin(char *s1, char *s2, int to_free);
char				*ft_strnew(size_t size);
char				*ft_strsub(char *s, unsigned int start, size_t len);

#endif
