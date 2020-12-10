// WAp to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main(void) {
    int arr[10];
    int a,b=5;
    for(a=1;a<11;a++){
        arr[a]=a*b;
    }
    for(a=1;a<11;a++){
        printf("5 X %d = %d \n",a,arr[a]);
    }
        return 0;
}

