#include "get_next_line.h"

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
	/*if (!p)
		return (NULL);*/
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


/*
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
}*/

