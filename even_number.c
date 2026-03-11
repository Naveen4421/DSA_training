#include <stdio.h>

int main() {
    // Write C code here
    int a[]={1,2,3,12,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int even=0;
    for(int i=0;i<n;i++){
            if(*(a+i)%2==0){
                even++;
            }
        }
        printf("even number is =%d",even);
   
    return 0;
}