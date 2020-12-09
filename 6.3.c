// WAP to change the value of a variable to ten times of its current value. Write a function and pass the value by reference.
#include <stdio.h>
int mux(int *x){
    
    printf("After value: %d \n",*x*10);
}

int main(void) {
int a=10;
printf("Before value: %d \n",a);
mux(&a);
  
    return 0;
}



