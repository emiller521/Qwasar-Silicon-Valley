#include "line.h"

char		*ft_strchr(const char *string, int character)
{
	while (*string)
	{
		if (*string == (char)character)
			return ((char *)string);
		string++;
	}
	return ((char)character == FALSE ? (char *)string : NULL);
}
