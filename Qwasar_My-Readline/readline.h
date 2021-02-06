#ifndef READLINE_H
#define READLINE_H
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "sys/uio.h"
# include <stdlib.h>
# define BUFF_SIZE 10
# define FD_LIMIT 4864
# define ERROR -1
# define TRUE 1
# define FALSE 0

char*       my_readline(int fd);
char		*my_strchr(const char *s, int c);
char*	    my_strcpy(char *dest, char *src);
char*       my_strdup(char *src);
int			reader(int fd, char *buffer);

#endif