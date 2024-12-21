/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:12:50 by raydogmu          #+#    #+#             */
/*   Updated: 2024/12/14 13:35:53 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

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
