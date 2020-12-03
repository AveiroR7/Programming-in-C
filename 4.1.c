// WAP to print Multiplication table of a given number
#include <stdio.h>


int main(void) {
    int n,i;
    printf("Enter the Number \n");
    scanf("%d",&n);
    
    for(i=1;i<11;i++){
        printf("%d \n",n*i);
        
    }
    
	return 0;
}

