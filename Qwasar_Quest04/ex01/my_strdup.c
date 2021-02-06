#include <stdlib.h>

int	my_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	   i++;
	return(i);
}

char	*my_strdup(char *src)
{
	int i;
	int len;
	char *dest;

	i = 0;
	len = my_strlen(src);
	dest = malloc(sizeof(char) * len + 1);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
