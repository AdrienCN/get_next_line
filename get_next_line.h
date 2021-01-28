/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adconsta <adconsta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:51:20 by adconsta          #+#    #+#             */
/*   Updated: 2021/01/28 19:08:02 by calao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		ft_gnlstrlen(char *str);
void	ft_gnlstrncpy(char *dest, char *src, int n);
char	*ft_gnlstrjoin(char *storage, char *s2);
char	*ft_gnlstrdup(char *str);
int		look_for_newline(char *str);

#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif
