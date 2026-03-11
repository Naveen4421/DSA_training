#include <stdio.h>

int main() {
    // Write C code here
    int a[]={1,2,3,12,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0;i<n;i++){
        int *p =a+i;
        b[i]=*p;
        p++;
    }
    printf("b array is\n");
    for(int i=0;i<n;i++){
           
        printf("%d   ",*(b+i));
    }
   
    return 0;
}