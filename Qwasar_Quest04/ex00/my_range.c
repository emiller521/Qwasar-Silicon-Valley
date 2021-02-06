#include <stdlib.h>

int   *ft_range(int min, int max)
{
	int *str;
	int i;
	int len;


  if (min >= max)
  {
    return (NULL);
  }

	i = 0;
	len = max - min;
	str = (int *)malloc(sizeof(min) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
