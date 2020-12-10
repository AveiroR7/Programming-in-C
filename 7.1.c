// WAp to create an array of 10 numbers.verify using pointer arithmetic that (ptr+2) 
//Points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main(void) {
    
    int arr[10],i;
    int *ptr = &arr[0];
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf(" This pointer Points to Same address location: %u \n",ptr);
    }
    else
    {
        printf("This pointer do not Points to Same address location");
    }
	return 0;
}

