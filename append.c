#include <stdio.h>		// for printf and fflush
#include <errno.h>		// for errno
#include <stdlib.h>		// for exit
#include <sys/types.h>	// for open and lseek
#include <sys/stat.h>	// for open
#include <fcntl.h>		// for open
#include <unistd.h>		// for lseek

void errExit(char* errMsg)
{
	int errorno = errno;

	printf("Exiting on error:\t%s\n", errMsg);
	printf("\n\nThe errno was %i\n", errorno);
	
	fflush(stdout);

	exit(EXIT_FAILURE);
}

// open an existing file for appending and try to seek to the beginning before writing data. Observe where the data ends up.

int main(int argc, char* argv[])
{
	// open file for writing
	int fd = open("testFile", O_APPEND | O_WRONLY);
	if (fd == -1)
		errExit("open");

	// attempt to seek to the beginning
	if (lseek(fd, 0, SEEK_SET) == -1)
		errExit("lseek");

	// write some data
	if (write(fd, "new\n", 5) == -1)
		errExit("write");

	exit(EXIT_SUCCESS);
}
