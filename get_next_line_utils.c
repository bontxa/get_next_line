#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	*my_free(char *s)
{
	free (s);
	return (NULL);
}


void	*my_malloc(int size)
{
	void	*p;

	p = malloc (size);
	if (!p)
		return (NULL);
	return (p);
}

char *splitjoin(char *s1, char *s2, char *p)
{
	int i;
	int x;

	i = 0;
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
	return (p);
}



char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;

	if (s1 == NULL)
	{
		s1 = (char *) my_malloc(1);
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);

	}
	/*if (s1[0] == '\0' && s2[0] == '\0')
	{
		free(s1);
		free(s2);
		return (NULL);
	}*/
	p = (char *) my_malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1 )));
	p = splitjoin(s1, s2, p);
	free (s1);
	free (s2);
	return (p);
}

