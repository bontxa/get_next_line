/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:53:10 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/24 18:40:50 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>

//char *ft_lif(char *s, char *tmp, int x, int i);
char	*get_next_line(int fd);
//void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
//void	ft_bzero(void *s, size_t n);
//char	*ft_strdup(const char *s);
void	*my_malloc(int size);
char *taglia (char *s);
char *scrivi(int x, char *s); //, int i);
char *null_cond2(char *s, int i, int fd);
void	*my_free(char *s);
char *splitjoin(char *s1, char *s2, char *p);
char *creatmp(int fd, int i);
char	*ft_leggi(int fd, int *i);





#endif
