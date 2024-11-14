#include "get_next_line_utilis.h"

//fd - file descriptor to read;
//returns line read from fd if has something to read OK else NULL;
//allowed functions: read, malloc, free.

char* get_next_line(int fd)
{
	char* file_name = "to_read.txt"
	int fd;
	void* buffer[];
//	int open (const char* path, int flags [, int mode ]);
	fd = open(file_name, O_RDONLY);

// ssize_t read(int fildes, void *buf, size_t nbyte);
	read(fd, buffer, size_t 15);
	
}
