/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:53:10 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/25 12:23:37 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*my_malloc(int size);
char	*taglia(char *s);
char	*scrivi(int x, char *s);
void	*my_free(char *s);
char	*splitjoin(char *s1, char *s2, char *p);
char	*ft_leggi(int fd, int *i);

#endif
