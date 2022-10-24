/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:41:45 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/24 16:09:36 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}



void	*my_malloc(int size)
{
	void	*p;

	p = malloc (size);
	if (!p)
		return (NULL);
	return (p);
}




char	*ft_strjoin(char *s1, char *s2)
{



	int		i;
	int		x;
	char	*p;

	i = 0;
	p = (char *) my_malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1 ))); // malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	x = 0;
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
	free ((void *)s1);
	free ((void *)s2);
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
	while (s[i] != '\n' && s[i])
		i++;
	if (s[i] == '\n')
		i++;
	str = my_malloc(sizeof(char) * (ft_strlen(s) - i + 1));
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

	if (s[x] == '\n')
		d = my_malloc(x + 2);
	else
		d = my_malloc(x + 1);
	x = 0;
	while (s[x] != '\n' && s[x])
	{
		d[x] = s[x];
		x++;
	}
	if (s[x] == '\n')
	{
		d[x] = '\n';
		x++;
	}
	d[x] = '\0';
	return (d);
}
/*
char *null_cond2(char *s, int i, int fd)
{
	int x;
	char *tmp;

	x = 0;
	while (i > 0)
	{
		tmp = (char *) my_malloc (sizeof(char) * BUFFER_SIZE + 1);
		i = read(fd, tmp, BUFFER_SIZE);
		if (i < 0) // || fd < 0)
			return (my_free(tmp));
		tmp[i] = '\0';
		s = ft_strjoin (s, tmp);
		if (s == NULL)
			return (s); //(my_free(s));
		while (s[x] != '\n' && s[x])
			x++;
		if (s[x] == '\n' || i == 0)
		{
			tmp = scrivi(x, s);
			s = taglia (s);
			return (tmp);
		}
		x = 0;
	}
	return (NULL);
}*/



char *get_next_line(int fd)
{
	static char *s;
	char		*tmp;
	int	i;
	int x;

	x = 0;
	i = 1;
	/*if (s == NULL)
	{
		s = (char *) my_malloc(1);
		s[0] = '\0';
	}*/
	while (i > 0)
	{
		tmp = (char *) my_malloc (sizeof(char) * BUFFER_SIZE + 1);
		i = read(fd, tmp, BUFFER_SIZE);
		if (i < 0 || fd < 0)
			return (my_free(tmp));
		tmp[i] = '\0';
		s = ft_strjoin (s, tmp);
		if (s == NULL)
			return (my_free(s));
		while (s[x] != '\n' && s[x])
			x++;
		if (s[x] == '\n' || i == 0)
		{
			tmp = scrivi(x, s);
			s = taglia (s);
			return (tmp);
		}
		x = 0;
	}
	return (NULL);
}

/*
int main()
{
	int fd;
	fd = open("prova.txt", O_RDONLY);
	char *tmp;
	tmp = get_next_line(fd);
	printf("%s", tmp);
	free (tmp);
	tmp = get_next_line(fd);
	printf("%s", tmp);
	free (tmp);
	tmp = get_next_line(fd);
	printf("%s", tmp);
	free (tmp);
	tmp = get_next_line(fd);
	printf("%s", tmp);
	free (tmp);
	tmp = get_next_line(fd);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	//free (tmp);
}*/
