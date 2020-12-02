// WAp to find greatest of four numbers entered by the user.
#include <stdio.h>

int main(void) {
    
	int num1,num2,num3,num4;
	
	printf("Enter the Number one :\n");
	scanf("%d",&num1);
	
	printf("Enter the Number two :\n");
	scanf("%d",&num2);
	
	printf("Enter the Number three :\n");
	scanf("%d",&num3);
	
	printf("Enter the Number four :\n");
	scanf("%d",&num4);
	
	if (num1>num2 && num1 > num3 && num1 > num4){
	    printf("Number one is greatest");
	}
	else if (num2 > num3 && num2 > num4){
	    printf("Number two is greatest");
	}
	else if (num3 > num4){
	    printf("Number three is greatest");
	}
	else if (num4 > num1){
	    printf("Number foour is greatest");
	}
	return 0;
}

