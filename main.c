#include "get_next_line.h"

int			main(int ac, char **av)
{
	int		fd;
	char 	*line;

	if (ac != 2  && ac != 3)
		return (ft_error("Введите один файл для чтения"));
	if (!strcmp(av[1], "-hex") && ac == 3)
	{
		if ((fd = open(av[2], O_RDONLY)) == -1)
			return (ft_error("Не удалось открыть файл"));
		while (get_next_line(fd, &line) == 1)
		{
			string2hexString(line);
			printf("\n");
			free(line);
		}
	}
	else if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
			return (ft_error("Не удалось открыть файл"));
		while (get_next_line(fd, &line) == 1)
		{
			printf("%s\n", line);
			free(line);
		}
	}
	else
		return (ft_error("Доступен только флаг -hex"));
	close(fd);
	return (0);
}
