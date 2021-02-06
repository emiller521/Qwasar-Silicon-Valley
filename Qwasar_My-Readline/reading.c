#include "readline.h"

int				reader(int fd, char *buffer)
{
	int		read_bytes;

	if ((read_bytes = read(fd, buffer, BUFF_SIZE)) > 0)//If your reading bytes
		return (read_bytes);//Return the number of bytes read 
	else if ((read_bytes = read(fd, buffer, FALSE)) == 0)//If the number buffer size entered is 0 
		return (FALSE); //Return 0
	else
		return (ERROR);//If nothing is done, return an error
}