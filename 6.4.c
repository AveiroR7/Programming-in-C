// WAP using a function which calculates the sum and average of two numbers.
//use pointers and print the values of sum and average in main()
#include <stdio.h>
void func(int x,int y,int *sum,float *Average){
    
    *sum = x+y;
    *Average = (float)(*sum)/2;
    printf("The Sum is : %d \n",*sum);
    printf("The Average is : %f \n",*Average);
}

int main(void) {
    int a,b,sum,Average;
    printf("Enter the First value :\n");
    scanf("%d",&a);
    printf("Enter the Second value :\n");
    scanf("%d",&b);
    
    func(a,b,&sum,&Average);
    return 0;
}



