//WAP using a function to find average of three numbers
#include <stdio.h>
float average(int a,int b,int c);


int main(void) {
    
   int a,b,c;
   printf("Enter the Value of A :\n ");
   scanf("%d",&a);
   printf("Enter the Value of B :\n ");
   scanf("%d",&b);
   printf("Enter the Value of C :\n ");
   scanf("%d",&c);
   printf("The average of the numbers is : %f ",average(a,b,c));

    return 0;
}

float average(int a,int b,int c){
    result= ((a+b+c)/3);
    return result;
    }

