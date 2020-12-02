//WAP to check if given Character is lowercase or not
#include <stdio.h>

int main(void) {
	char value;
	printf("Enter a Character :\n");
	scanf("%c",&value);
	
	if (value >= 97 && value <= 122){
	printf("It is lower case");
	}
	else{
	    printf("it is not lower case");
	}
	return 0;
}

