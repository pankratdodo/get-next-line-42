#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <sys/stat.h>
# include <unistd.h>

# define BUFF_SIZE 100

int		get_next_line(int const fd, char **line);
int		ft_str_fd(char **str, char **line, int fd, int ret);
char	*string2hexString(char* input);
int 	ft_error(char *str);
void	*on_crash();
char	*ft_strjoin(char *s1, char *s2, int to_free);
void	ft_strdel(char **as);
char	*ft_strnew(size_t size);
char	*ft_strsub(char *s, unsigned int start, size_t len);

#endif
