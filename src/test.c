#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "server.h"

int main (int argc, char **argv)
{
	int ret;

	open_sockets ();
	printf ("open_socket: %d\n", ret);
	sleep (10);

	return 0;
}
