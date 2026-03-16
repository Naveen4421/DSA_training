// Online C compiler to run C program online
#include <stdio.h>
int a[4]={10,54,34,20};
int n=sizeof(a)/sizeof(a[0]);

int main() {
    // Write C code here
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            
        } 
    }
        for(int i=0;i<n;i++){
            printf("%d  ",a[i]);
    }
    

    return 0;
}