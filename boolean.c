#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// redefine new datatype BOOl
typedef int Bool;
#define True 1
#define False 0


int main(void){

	Bool aBooleanVariable;
	aBooleanVariable = True;
	printf("The value of a Boolean %d\n",aBooleanVariable );

	return EXIT_SUCCESS;
}
