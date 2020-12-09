// WAP to print the value of variable i by using "pointer to pointer" type of variable.
#include <stdio.h>

int main(void) {
    int i = 346;  
    int *ptr; 
    int **ptr2ptr;
    
    ptr = &i;
    ptr2ptr = &ptr;
    
    printf("Value of i %u",**ptr2ptr);
    return 0;
}



