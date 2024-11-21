#include "get_next_line_utilis.h"

//fd - file descriptor to read;
//returns line read from fd if has something to read OK else NULL;
//allowed functions: read, malloc, free.

char* get_next_line(int fd)
{
	char* buffer;
	char* raw_line;
 static char* after_new_line_chars;
	char* until_new_line_chars;
	
	if((fd < 0) || BUFFER_SIZE <= 0)
	{
		free(after_new_line_chars);
		buffer = NULL;
		after_new_line_chars = NULL;
		return (0);
	}
	
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if(!buffer)
		return (0);


	
	raw_line = get_raw_line(fd, buffer);
	until_new_line_chars = send_chars_UNL();
	after_new_line_chars = send_chars_ANL();
	
	
	return (until_new_line_chars);	
}

char* get_raw_line(int fd, char* buffer)
{
	return (raw_line);	
}

char* send_chars_UNL(char* raw line)
{
	return (until_new_line_chars);
}

char* send_chars_ANL(char* raw line)
{
	return (afte_new_line_chars);
}
