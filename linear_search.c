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
    printf("enter the searching element:\n");
    scanf("%d",&pos);
    for(int i=0;i<n;i++){
        if(pos==a[i]){
            printf("target is found in ");
            break;
        }
    }
    
    
   
    

    return 0;
}