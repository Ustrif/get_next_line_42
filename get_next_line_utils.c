#include "get_next_line.h"

char	*ft_strndup(const char *src, int start, int len)
{
	char	*result;
	int		i;

	result = malloc(len + 1);
	i = 0;
	if (result == NULL)
		return (NULL);
	while (src[start] != '\0' && i < len)
	{
		result[i] = src[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

int	ft_strlen(const char *s)
{
	int	nm;

	nm = 0;
	if (s == NULL)
		return (0);
	while (s[nm] != '\0')
		nm++;
	return (nm);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		s1_l;

	i = 0;
	s1_l = ft_strlen(s1);
	str = malloc(s1_l + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (i < s1_l)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		str[s1_l + i] = s2[i];
		i++;
	}
	str[s1_l + ft_strlen(s2)] = '\0';
	if (s1 != NULL)
		free(s1);
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char) c)
			return ((char *) s);
		s++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)s);
	return (NULL);
}
