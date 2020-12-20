// Wap to create two dimensional vector using structure in C.
#include <stdio.h>
    struct vector{
      int x;
      int y;
    };
    
int main(void) {
    
    struct vector v1,v2;
    v1.x = 34;
    v1.y = 54;
    printf(" X dimensional vector is %d Y dimensional vector is %d \n",v1.x,v1.y);
    
    v2.x = 534;
    v2.y = 5544;
    
    printf(" X dimensional vector is %d Y dimensional vector is %d \n",v2.x,v2.y);
    
	return 0;
}

