#include "get_next_line.h"
#include <stdio.h>


char	*get_next_line(int fd)
{
	size_t	bytes_read;
	int 	i;
	char	buffer[BUFFER_SIZE];

	bytes_read = read(fd, buffer, sizeof(buffer) - 1);
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			ft_putstr(buffer);
		i++;
	}
}

/*
int main() {
	printf("Hello, World!\n");
	return 0;
}
*/