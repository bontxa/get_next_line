#include "get_next_line.h"

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

