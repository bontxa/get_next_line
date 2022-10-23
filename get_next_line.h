/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:53:10 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/21 18:27:54 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>


char	*get_next_line(int fd);
//void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
//void	ft_bzero(void *s, size_t n);
//char	*ft_strdup(const char *s);
void	*my_malloc(int size);
char *taglia (char *s);
char *scrivi(int x, char *s, int i);




#endif
