#include "get_next_line.h"

char			*string2hexString(char* input)
{
	int			loop;

	loop = 0;
	while(input[loop] != '\0')
	{
		printf("%02X", input[loop]);
		loop++;
	}
	return (NULL);
}

int				ft_str_fd(char **str, char **line, int fd, int res)
{
	int			i;
	char		*src;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\0')
	{
		if (res == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		src = ft_strdup(str[fd] + i + 1);
		ft_strdel(&str[fd]);
		str[fd] = src;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static char	*str[1025];
	char		buff[BUFF_SIZE + 1];
	int			chten;

	if (fd < 0 || line == NULL || (read(fd, NULL, 0) < 0))
		return (-1);
	while ((chten = read(fd, buff, BUFF_SIZE)))
	{
		buff[chten] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		str[fd] = ft_strjoin(str[fd], buff, 1);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (chten < 0)
		return (-1);
	else if (chten == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (ft_str_fd(str, line, fd, chten));
}
