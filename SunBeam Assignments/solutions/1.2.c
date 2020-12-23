#include <stdio.h>

int main(void) {
    
	char num;
	int number;
    printf("Enter the Number for Character:\n");
	scanf("%c",&num);
	printf("Enter the Number for Decimal/Hexadecimal/Octal :\n");
	scanf("%d",&number);
	

	
	printf("The Number is in Decimal: %d \n",number);
	printf("The Number is Octal: %o \n",number);
	printf("The Number is Hexadecimal: %x \n",number);
	printf("The Number is Character: %c \n", num);
	
	return 0;
}

