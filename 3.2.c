// WAP to calc income tax paid by the employee 2.5 to 5 lac = 5% and 5 to 10 lacs = 20% and above 10 lacs = 30%
#include <stdio.h>

int main(void) {
    int tax,income;
    
    printf("Enter your income\n");
    scanf("%d",&income);
    
    if (income > 250000 && income < 500000){
        printf("Your income is %d and u need to pay 5 percent tax : %d",income,tax);
    }
    
    else if (income >= 500000 && income < 1000000){
        printf("Your income is %d and u need to pay 20 percent : %d",income,tax);
    }
    
    else if (income > 1000000){
        printf("Your income is %d and u need to pay 30 percent : %d",income,tax);
    }
    
    else {
        printf("your income is %d and you are not eligible for tax",income);
    }


	return 0;
}

