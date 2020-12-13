// WAP containing a function which has 3 by 10 array and containing 2,7,9 Multiplication.
#include <stdio.h>
int mul(int *table,int num,int n){
    printf("The Multiplication of table %d is : \n",num);
    for(int i=0;i<n;i++){
        table[i]=num*(i+1);
    }
    
    for(int i=0;i<n;i++){
       printf("%d X %d = %d \n",num,i+1,table[i]);
    }
     printf("************************************\n \n");
}


int main(){
   int table[3][10];
   mul(table[0],2,10);
   mul(table[1],7,10);
   mul(table[2],9,10);
   
    return 0;
}
