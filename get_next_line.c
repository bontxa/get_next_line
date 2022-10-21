/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:41:45 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/21 18:41:16 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>


//per test
#include <unistd.h>
//per test

/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*p;

	i = 0;
	p = (char *) malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	x = 0;
	if (!p)
		return (NULL);
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	while (s2[i])
	{
		p[x] = s2[i];
		x++;
		i++;
	}
	p[x] = '\0';
	return (p);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}



char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	p = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

*/

char *taglia (char *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\n')
		i++;
	str = malloc (sizeof(char) * (ft_strlen(s) - i + 1));
	i++;
	while (s[i])
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	free (s);
	return (str);
}


char *scrivi(int x, char *s)
{
	char *d;

	d = malloc(x + 2);
	if (!d)
		return (NULL);
	x = 0;
	while (s[x] != '\n')
	{
		d[x] = s[x];
		x++;
	}
	d[x] = '\n';
	x++;
	d[x] = '\0';
	return (d);
}




char *get_next_line(int fd)
{
	static char *s;
	char		*d;
	char		*tmp;
	int	i;
	int x = 0;

	i = 1;
	if (s == NULL)
		s = ft_strdup("");
	while (i > 0)
	{
		d = NULL;
		tmp = (char *) malloc (sizeof(char) * BUFFER_SIZE + 1);
			if (!tmp)
				return (NULL);
		i = read(fd, tmp, BUFFER_SIZE);
		tmp[i] = '\0';
		s = ft_strjoin (s, tmp);
		while (s[x] != '\n' && s[x])
			x++;
		if (s[x] == '\n')
		{
			d = scrivi(x, s);
			s = taglia (s);
			return (d);
		}
		x = 0;
		free (tmp);
	}
	free (s);
	return (d);
}


/*
int main()
{
	int fd;
	fd = open("prova.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}*/
