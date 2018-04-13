#include "revert_string.h"
#include <stdio.h>
void RevertString(char *str)
{
	// your code here
	int size = strlen(str);
	for(int i=0; i < (int)(size/2);i++){
	str[i] = str[i] ^ str[size-1-i];
	str[size-1-i] = str[i] ^ str[size-1-i];
	str[i] = str[i] ^ str[size-1-i];
	}
}

void __attribute__ ((constructor)) initLibrary(void) {
    printf("Library is initialized\n");
}
void __attribute__ ((destructor)) cleanUpLibrary(void) {
    printf("Library is exited\n"); 
}
/*how compile shared lib
 1)gcc -c -fPIC revert_lib.c -o lib.o
 2)gcc -shared lib.o -o lib.so
 3)gcc main.o -o shared_out -L$(pwd) -lshared
 */

/*
1)gcc -c revert_lib.c -o lib.o
2) ar rcs lib.a lib.o
 3)gcc main.o -o static_out -L$(pwd) -lstatic
 * 
 */