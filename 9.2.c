// WAP to function Sumvector which returns the sum of two vectors passed to it. The vectors must be 
// two dimensional.

#include <stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector d1, struct vector d2){
  struct vector result;
  result.x = d1.x + d2.x;
  result.y = d1.y + d2.y;
  return result;
};

int main(void) {
    
    struct vector d1,d2,sum;
    
    d1.x = 3;
    d1.y = 5;
    
    printf("X dimensional vector is %d Y dimensional vector is %d \n",d1.x,d1.y);
    
    d2.x = 7;
    d2.y = 2;
    
    printf("X dimensional vector is %d Y dimensional vector is %d \n",d2.x,d2.y);
    
    sum = sumVector(d1,d2);    
    printf("X dimensional of result is %d Y dimensional of result is %d \n",sum.x,sum.y);
    return 0;
}



