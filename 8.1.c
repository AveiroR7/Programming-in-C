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
        scanf("%c", &c);
        string2[i] = c;
        i++;
    }
    string2[i-1]= '\0';
    
    printf("The values of string 1 is: %s \n",string1);
    printf("The values of string 2 is: %s \n",string2);
    printf("Comparing the strings %d",strcmp(string1,string2));
	return 0;
	
}



