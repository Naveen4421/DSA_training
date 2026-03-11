#include <stdio.h>

int main() {
    // Write C code here
    int a[]={1,2,3,12,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *low=a;
    int *high=a+n-1;
    printf("n=%d\n",n);
    while (low<high){
        int temp=*low;
        *low=*high;
        *high=temp;
        low++;
        high--;
        
    }
    for(int i=0;i<n;i++){
            printf("%d  ",*(a+i));
        }
   
    return 0;
}