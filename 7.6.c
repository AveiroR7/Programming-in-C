// WAP to create 3d array and print its address.
#include <stdio.h>

int main(){
    int arr[2][3][4];
    for(int i=0;i<2;i++){    
        for(int j=0;j<3;i++){
            for(int k=0;k<4;i++){
                printf("The elements of [%d] [%d] [%d] is %u \n", i, j, k, &arr[i][j][k]);
            }
        }
    }
    return 0;
}
