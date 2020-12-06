//WAP to find Factorial of a given number using for loop
#include <stdio.h>

int main(void) {
    int Factorial=1,num,i;
    
    printf("Enter the number :");
    scanf("%d",&num);
    
    for(i = 1; i <= num; i++) {
      Factorial = Factorial*i;
   }
    printf("Factorial is %d \n",Factorial);
	return 0;
}

