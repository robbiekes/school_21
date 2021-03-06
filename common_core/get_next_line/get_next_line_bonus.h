/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgwyness <mgwyness@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:19:03 by mgwyness          #+#    #+#             */
/*   Updated: 2021/11/01 17:19:03 by mgwyness         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_read_bytes(int fd, char *reserved);
char	*ft_create_line(char **reserved);
void	ft_cut_str(char *reserved);
char	*ft_read_fill(char *buf, char *reserved, int fd);

char	*ft_strjoin(char *s1, char *s2, int count);
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_str_len(char *reserved);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif

#endif
