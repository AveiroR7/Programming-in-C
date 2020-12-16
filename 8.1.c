//WAP to take string as an input from the user using %c and %s. confirm thhat the strings are equal.
#include <stdio.h>
int main(void) {
    
    char string1[30];
    char string2[30];
    char c;
    int i=0;
    
    printf("Enter the First string: \n");
    scanf("%s",string1);
    
    printf("Enter the Second string: \n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&string2);
        c= string2[i];
        i++;
    }
    
    printf("The values is: %s",string2);
	return 0;
	
}



