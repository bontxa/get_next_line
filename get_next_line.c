 #include <unistd.h>
 #include <stdio.h>

char *get_next_line(int fd)
{
    static char *s;
    char        *d;
    int         i;
    int         j;
    int         x;
    int         start;

    x = 0;
    i = read(fd, s, BUFFER_SIZE);
    while (s[j] == 0)
        j++;
    start = j;
    while (s[j] != '\n' && s[j] != EOF && s[j] != s[BUFFER_SIZE])
        j++;
    if (s[j] == '\n')
        d = malloc(j - start + 2);
    else
        d = malloc(j - start + 1);
    while (s[start] < s[j])
    {
        d[x] = s[start];
        //ft_bzero(s, 1);
        x++;
        start++;
    }
    if (s[start] == '\n')
    {
        d[x] = '\n';
        x++;
        d[x] = '\0';
    }
    else
        d[x] = '\0';
    return (d);
}