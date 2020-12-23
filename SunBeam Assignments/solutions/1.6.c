#include <stdio.h>

int main(void) {
	int number,prod;
	
	printf("Enter the Number :\n");
	scanf("%d",&number);
	printf("The Table for %d is:\n",number);
	for(int i=1;i<11;i++){
	    prod = number*i;
	    printf(" %d X %d = %d \n",number,i,prod);
	    
	}

	
	return 0;
}

