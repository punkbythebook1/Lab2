#include "revert_string.h"

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

