// WAP to print the address of the variable. use this address to get the value of this variable/
#include <stdio.h>

int main(void) {
    int a=10;
    int *ptr;
    ptr = *(&a);
    printf("Address of the variable: %u \n",&a);
    printf("value of the variable: %d \n",ptr);
	
	return 0;
}

