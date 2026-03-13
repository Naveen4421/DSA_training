// Online C compiler to run C program online
#include <stdio.h>
int n;
int target;

int main() {
    // Write C code here
    printf("enter the array size:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array element:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the searching element:\n");
    scanf("%d",&target);
    int left=0;
    int right=n;
    while(left<right){
        int mid=(left+right)/2;
        if(a[mid]==target){
            printf("target is found at %d",mid);
            break;
        }else if(a[mid]<target){
            left=mid;
        }else{
            right=mid;
        }
    }
    
    return 0;
}