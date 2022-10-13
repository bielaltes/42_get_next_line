#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0' && *str != '\n')
	{
		++str;
		++len;
	}
	return (len);
}

size_t ft_strlen(const char *str)
{
    size_t	len;

    len = 0;
    while (*str != '\0')
    {
        ++str;
        ++len;
    }
    return (len);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strdup_gnl(const char *s1)
{
	char	*new;
    int i = 0;

    new = malloc(sizeof(char) *(ft_strlen(s1) + 1));
	if (!new)
		return (NULL);
	while (*s1 != '\0')
	{
		new[i] = *s1;
		++s1;
        ++i;
	}
	if (*s1 == '\n')
        new[i] = *s1;
    else
    {
        new[i] = '\0';
    }
    return (new);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}


/*char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
    char    *aux;

    aux = s1;
	i = 0;
    if (s1 == NULL)
    {
        s1 = ft_strdup_gnl("");
        if (!s1)
            return (NULL);
    }
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (*s1 != '\0')
	{
		new[i] = *s1;
		++i;
		++s1;
	}
	while (*s2 != '\0')
	{
		new[i] = *s2;
		++i;
		++s2;
	}
	new[i] = '\0';
    free(aux);
	return (new);
}*/
