// WAP to dynamically create an array of size 6 capable of storing 6 integers.
#include <stdio.h>

int main(void) {
    int*ptr;
    
    ptr[6] = (int*)malloc(6*sizeof(int));
    
    return 0;
}
