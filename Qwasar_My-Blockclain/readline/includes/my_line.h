#ifndef MY_LINE_H
# define MY_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "sys/uio.h"
# include <stdlib.h>
#include <stdio.h>
# define BUFF_SIZE 10
# define FD_LIMIT 4864

int		myline(int const fd, char **line);
char	*my_strdup(const char *src);
int		my_strcmp(const char *s1, const char *s2);
char	*my_strchr(const char *string, int character);
size_t  words(char const *string, char character);
char	**my_split(char const *string, char character);
int		my_new_line(char **array, char **line);
int		reader(int fd, char *buffer);




#endif
