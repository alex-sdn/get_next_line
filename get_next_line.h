/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadanow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:32:24 by asadanow          #+#    #+#             */
/*   Updated: 2022/11/30 18:27:29 by asadanow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(char	*str);
void	*ft_exit_error(char **str);
void	*ft_exit_error_duo(char **str1, char **str2);
int		ft_check_line(ssize_t rd, char *str);
char	*ft_dupcat(char *dest, char *src);
char	*ft_dup_line(char *str);
char	*ft_remove_line(char *save);
char	*get_next_line(int fd);

#endif
