#include <stdio.h>		// for printf and fflush
#include <errno.h>		// for errno
#include <stdlib.h>		// for exit

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
	

	exit(EXIT_SUCCESS);
}
