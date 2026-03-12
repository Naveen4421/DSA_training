#include <stdio.h>
#include<string.h>
int n;
struct students{
    int reg;
    int m1;
    int m2;
};
void addstudent(struct students s[],int n){
    for(int i=0;i<n;i++){
        printf("enter the reg number ofstudent %d=",i+1);
        scanf("%d",&s[i].reg);
        printf("enter the marks of m1%d=",i+1);
        scanf("%d",&s[i].m1);
        printf("enter the marks of m2%d=",i+1);
        scanf("%d",&s[i].m2);
    }
    
}
void details(struct students s[],int n){
    for(int i=0;i<n;i++){
        printf(" student details");
        printf("reg number of student=%d\n",s[i].reg);
        
        printf("marks of m1=%d:\n",s[i].m1);
        
        printf("marks of m2=%d:\n",s[i].m2);
        printf("\n");
        
        
        
    }
}



int main() {
    // Write C code here
    struct students s[100];
    
    
    printf("enter the total number of students:");
    scanf("%d",&n);
    addstudent(s,n);
    details(s,n);
    
    
    
    return 0;
    
}