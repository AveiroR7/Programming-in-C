#include <stdio.h>

int main(void)
{
  int a,b,sum,diff,prod;
  printf("Enter First number: \n");
  scanf("%d",&a);
  printf("Enter Second number: \n");
  scanf("%d",&b);
  sum = a+b;
  printf("The Sum: %d \n",sum);
  diff = a-b;
  printf("The difference: %d \n",diff);
  prod = a*b;
  printf("The product: %d \n",prod);
  return 0;
}
