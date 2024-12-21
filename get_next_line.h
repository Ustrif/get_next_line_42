/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:13:03 by raydogmu          #+#    #+#             */
/*   Updated: 2024/12/14 13:41:46 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_strndup(const char *src, int start, int len);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *s);
char	*line_control(char **line);
char	*ft_strchr(const char *s, int c);
void	free_if_empty(char **line);

#endif
