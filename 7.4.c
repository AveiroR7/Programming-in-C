// WAP containing a function which reverses the array passed to it.
#include <stdio.h>
void reverse(int *arr,int n){
    int temp;
    for (int i=0;i<(n/2);i++){
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main() {
    int n=7;
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,n);
    for (int i=0;i<n;i++){
         printf("The elements %u of reverse are : %u \n ",i+1,arr[i]);
    }
    return 0;
}
