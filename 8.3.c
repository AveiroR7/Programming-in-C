// WAP to slice the string and changing original string.
#include <stdio.h>
int slice(char *string,int a,int b){
    int i=0;
    while((a+i)<b){
        string[i]=string[i+a];
        i++;
    }
    string[i] ='\0';
}

int main(void){
    char string[20] = "RahulWasnik";
    slice(string,1,7);
    printf("%s",string);
    return 0;
}
