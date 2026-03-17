// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //printf("Try programiz.pro");
    int n;
    printf("Enter the total number of ticket:\n");
    scanf("%d",&n);
    int a[n];
    int search;
    for(int i=0;i<n;i++){
    printf("Enter the ticket number %d:\n",i+1);
    scanf("%d",&a[i]);
    }
    printf("The ticket numbers are :\n");
    for(int i=0;i<n;i++){
    //printf("Enter the ticket number %d \n:");
    printf("%d  ",a[i]);
    }
    printf("\n");
    printf("Enter the ticket number to be searched:\n");
    scanf("%d",&search);
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==search){
            //printf("Congratulation you won the Lottery");
            c=c+1;
            break;
            //c=c+1;
        }
        //printf("Sorry the ticker number %d is not there Better luck next time",search);
    }
    if(c==0){
        printf("Sorry the ticker number %d is not there Better luck next time!",search);
    }else{
        printf("Congratulation!you  have won the Lottery");
    }
    

    //return 0;
}