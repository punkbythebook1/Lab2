#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "revert_string.h"


int main(int argc, char* argv[])
{
    int str_size = 0;
	if (argc < 2)
	{
	    
		printf("Usage: %s string_to_revert\n", argv[0]);
		return -1;
	}
	
	for(int i=0;i < (argc -1); i++)
        str_size+=sizeof(char)*strlen(argv[i+1]);
        
	char *reverted_str = malloc(str_size + 1);
	for(int i=0;i < (argc -1); i++){
	   strcat(reverted_str,argv[i+1]);
	   strcat(reverted_str," ");
   }

	//strcpy(reverted_str, argv[1]);
    //memcpy(reverted_str,argv[1],str_size);
    
	RevertString(reverted_str);

	printf("Reverted: %s\n", reverted_str);
	free(reverted_str);
	return 0;
}

