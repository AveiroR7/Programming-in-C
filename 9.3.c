// WAP to create an array of 5 complex numbers and display them with the
// help of a display function. the values must be taken as an input from the user.
#include <stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;


int main(void) {
    comp nums[5];
    
    for(int i=0;i<5;i++){
        printf("Enter the real value for num : %d \n",i+1);
        scanf("%d", &nums[i].real);
        
        printf("Enter the complex value for num : %d \n",i+1);
        scanf("%d", &nums[i].complex);
    }
    
    for(int i=0;i<5;i++){
    display(nums[i]);
    }
    return 0;
}

void display(comp c){
    printf("The value of real number is : %d \n",c.real);
    printf("The value of complex number is : %d \n",c.complex);
}


