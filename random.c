#include <stdio.h>
#include <stdlib.h>

int random_int(int max)
{
	return rand()%max;
}

int main(int argc, char *argv[]) 
{
	if (argc != 2) {
		return EXIT_FAILURE;
	}
	
	int max = atoi(argv[1]);
	
	return EXIT_SUCCESS;:
}