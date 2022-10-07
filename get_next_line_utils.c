#include "get_next_line"

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

char	*ft_strdup_gnl(const char *s1)
{
	char	*new;
    int i = 0;

    while (*s1 != '\n' && *s1 != '\n')
        ++s1;
	new = malloc(sizeof(char) *(ft_strlen_gnl(s1) + 1));
	if (!new)
		return (NULL);
	while (*s1 != '\0')
	{
		new[i] = *s1;
		++s1;
        ++i;
	}
	new[i] = '\0';
	return (new);
}
