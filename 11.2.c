// WAP to use the array in problem 1 to store 6 integers entered by the user.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int*ptr;
    
    ptr = (int*)malloc(6*sizeof(int));
    
    for(int i=0;i<6;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("Enter the Number %d \n",ptr[i]);
    }
    return 0;
}
