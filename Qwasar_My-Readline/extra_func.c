#include "readline.h"

char		*ft_strchr(const char *s, int c) {
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return ((char)c == 0 ? (char *)s : NULL);
}

int	        my_strlen(char *str) {
    int i = 0;

    while(str[i])
        i++;
    return(i);
}

char*	        my_strcpy(char *dest, char *src) {
    int i = 0;

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

char*       my_strdup(char *src)
{
    int i = 0;
    int size = my_strlen(src);
    char *dest = malloc(sizeof(char) * my_strlen(size + 1));
    dest = my_strcpy(dest, src);
    return(dest);
}