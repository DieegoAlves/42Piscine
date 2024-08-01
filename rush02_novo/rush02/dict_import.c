#include "header.h"

char    *import_dict(char *dict_path)
{
	char	buffer[10000];
	int		fd;
	int		i;

	i = 0;
	fd = open (dict_path, O_RDONLY);
	if (fd == -1) 
	{
		error();
		return ("\0");
	}
	read(fd, buffer, 10000);
	dict_to_array(buffer);
	return ("finalizei o import");
	close(fd);
	
}