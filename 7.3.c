// WAp to create an array of 10 integers and store multiplication table of user provided input in it.

#include <stdio.h>

int main(void) {
    int arr[10];
    int i,b,mul;
    printf("Enter the Value:");
    scanf("%d",&b);
    
    for(i=1;i<11;i++){
        mul= i*b;
        printf(" %d X %d = %d \n",b,i,mul);
    }
    
    
        return 0;
}

