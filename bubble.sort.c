#include <stdio.h>

// Function to perform binary search
int main(){
    int n;
    printf("Enter the total number of student :\n");
    scanf("%d",&n);
    int a[n];
    int search;
    for(int i=0;i<n;i++){
    printf("Enter the height of the student %d:\n",i+1);
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            //printf("Heights order after 1st iteration %d:\n %d\n",i+1,a[j]);
        }//printf("Heights order after 1st iteration %d:\n %d",i+1,a[i]);
    }
    printf("After final comparison of all students ,heights order became :\n");
    for(int i=0;i<n;i++){
    //printf("Enter the height of the student %d:\n",i+1);
    printf("%d  ",a[i]);
    }
    
    
    
    return 0;
}