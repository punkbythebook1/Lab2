#include "swap.h"

void Swap(char *a, char *b)
{
	// ваш код здесь
	*a = *a ^ *b;
    *b = *b ^ *a;
    *a = *b ^ *a;  
}
