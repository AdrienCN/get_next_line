#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	
	(void)argc;
	int	res;
	int fd;
	char *line;
	
	line = NULL;
	fd = open(argv[1], O_RDONLY);
	while ((res = get_next_line(fd, &line)) > 0)
	{
		printf("line:[%s]\n", line);
	}
	return (0);
}	
