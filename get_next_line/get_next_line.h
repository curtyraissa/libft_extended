/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <rcurty-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:06:48 by rcurty-g          #+#    #+#             */
/*   Updated: 2025/02/11 16:29:57 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_file(int fd, char *stash);
char	*extract_line(char *stash);
char	*update_stash(char *stash);
char	*ft_sjoin(char *s1, char *s2);
size_t	strlen_gnl(const char *str);
char	*ft_strchr_gnl(const char *s, int c);
void	*calloc_gln(size_t nmemb, size_t size);

#endif
