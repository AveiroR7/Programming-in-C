// WAP to your own version of string length function from <string.h>
#include <stdio.h>


int length(char *string)
{
    char *ptr = string;
    int value = 0;
    while(*ptr!='\0')
    {
        value++;
        ptr++;
    }
    return value;
}

int main(void)
{
    char string[]= "Rahul Wasnik";
    int len_value = length(string);
    printf("The value of string is : %d \n",len_value);
    
	return 0;
}
