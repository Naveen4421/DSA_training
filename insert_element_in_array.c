// Online C compiler to run C program online
#include <stdio.h>
int n;
int pos,ele;

int main() {
    // Write C code here
    printf("enter the array size:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array element:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the position where to add and which element we need to insert:\n");
    scanf("%d%d",&pos,&ele);
    n=n+1;
    a[n];
    for(int i=n-1;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=ele;
    for(int i=0;i<n;i++){
        printf("%d   ",a[i]);
    }
    
    

    return 0;
}