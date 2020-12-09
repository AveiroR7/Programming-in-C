// WAP having variable i. print the address of i. pass this variable to a function and print its address. are these addresses same? why?

#include <stdio.h>
int pass(int i){
    
   printf("%u \n",&i);
}

int main(void) {
    
    int i=100;
    printf("%u \n",&i);
    pass(i);
    return 0;
}



