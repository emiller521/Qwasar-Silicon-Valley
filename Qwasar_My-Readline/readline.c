#include "readline.h"

int				ft_new_line(char **array)
{
	char	*n;
	char	*tmp;
    char	**line;

	if ((*array)[0] == '\0')//If the first char read on the array is empty, return(0)
		return (0);
	tmp = ft_strdup(*array);//Dupicate all information found in the **array 
	ft_memdel((void**)array);//Delete original copy of **array
	if ((n = ft_strchr(tmp, '\n')))//Looking for new line char on *tmp
	{
		*n = '\0';//If new line is found, set that char to end of line
		*line = ft_strdup(tmp);//Set everything found BEFORE nee line char into *line
		*array = ft_strdup(n + 1);//Duplicate everything found after new line into *array 
		ft_memdel((void**)&tmp);//Delete the original copy of tmp
	}
	else
	{
		*line = tmp;//If no new line, is found set everything in tmp into *line
		ft_memdel((void**)array);//Delete the original copy of array
	}
	return (1);


char*				my_readline(int fd) {
	char        *str[FD_LIMIT]; //
	char		buffer[BUFF_SIZE + 1];
	int			bytes;
	char		*tmp;

	if (fd < 0 || !line || fd > FD_LIMIT)
		return (ERROR);
	if (!str[fd])//If file descriptor is empty
		str[fd] = NULL; //Set the string to NUll
	if ((read(fd, buffer, 0) < FALSE))//If there is nothing to read
		return (ERROR);//Return error
	while (!my_strchr(str[fd], '\n'))//While you haven't found a new line yet
	{
		bytes = reader(fd, buffer);//Bytes is equal to number of bytes read
		buffer[bytes] = '\0';
		if (bytes == 0)//If there are no more bytes to be read
			break ;
		tmp = ft_strjoin(str[fd], buffer);//Put file descriptor and buffer into tmp
		free(str[fd]);
		str[file_d] = my_strdup(tmp);//File descriptor equal to duplicater of tmp
		free(tmp);
	}
	return (ft_new_line(&str[file_d], line));
}
