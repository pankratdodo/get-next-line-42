#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 10

int		get_next_line(int const fd, char **line);
int		ft_str_fd(char **str, char **line, int fd, int ret);
char	*string2hexString(char* input);
int 	ft_error(char *str);
void	*on_crash();

#endif
