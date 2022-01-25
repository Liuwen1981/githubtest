#include <stdio.h>
#include <stdlib.h>

int random_int(int max)
{
	return rand()%max;
}

void init_rand(void) {
	srand(time(NULL));
	
}
int main(int argc, char *argv[]) 
{
	if (argc != 2) {
		return EXIT_FAILURE;
	}	
	//Bob add the new comments.
    //Alice add the new comments
	init_rand();
	return 0;
}