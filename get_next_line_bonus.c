#include "get_next_line_bonus.h"

char	*line_control(char **line)
{
	int		i;
	char	*result;
	char	*temp;

	if (*line == NULL)
		return (NULL);
	i = 0;
	while ((*line)[i])
	{
		if ((*line)[i] == '\n')
		{
			result = ft_strndup(*line, 0, i + 1);
			if (result == NULL)
				return (NULL);
			temp = ft_strndup(*line, i + 1, ft_strlen(*line) - i - 1);
			if (temp == NULL)
			{
				free(result);
				return (NULL);
			}
			free(*line);
			*line = temp;
			return (result);
		}
		i++;
	}
	return (NULL);
}

int	reader(char **buf, int fd)
{
	int		readed;
	char	*temp;

	temp = malloc(BUFFER_SIZE + 1);
	if (temp == NULL)
		return (-1);
	while (1)
	{
		readed = read(fd, temp, BUFFER_SIZE);
		if (readed <= 0)
			break ;
		temp[readed] = '\0';
		*buf = ft_strjoin(*buf, temp);
		if (*buf == NULL)
			break ;
		if (ft_strchr(*buf, '\n') != NULL)
			break ;
	}
	free(temp);
	return (readed);
}

char	*line_process(char **buf, int fd)
{
	char	*data;
	int 	readed;

	if (*buf != NULL)
	{
		data = line_control(buf);
		if (data != NULL)
			return (data);
	}
	readed = reader(buf, fd);
	if (*buf == NULL)
		return(NULL);
	data = line_control(buf);
	if (data == NULL && readed == 0 && *buf != NULL)
	{
		data = ft_strndup(*buf, 0, ft_strlen(*buf));
		if (data == NULL)
			return (NULL);
		free(*buf);
		*buf = NULL;
	}
	return (data);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*result;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	result = line_process(&buffer[fd], fd);
	if (result == NULL)
		return (NULL);
	return (result);
}
