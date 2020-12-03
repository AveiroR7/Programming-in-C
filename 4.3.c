// WAP to print the sum of first ten natural numbers using while loop
#include <stdio.h>

int main(void) {
    int number=10,sum=1,i;
    while (i<11){
        i++;
        sum=(number*(number+1)/2);
    }
    printf("The sum of first ten natural numbers (1-10) is %d \n",sum);
   
    return 0;
}

