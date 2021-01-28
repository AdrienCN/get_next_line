#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: 2 args\n");
		return (1);
	}
	int fd;
	int res;
	char *line;

	fd = open(argv[1], O_RDONLY);
	while ((res =  get_next_line(fd, &line)) > 0)
		printf("%s\n", line);
	close(fd);
	return (0);
}
