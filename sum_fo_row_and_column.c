#include <stdio.h>

int main() {
    // Write C code here
    int a[3][3]={{1,2,6},
        {3,4,8},
        {7,8,9}
    };
    int sum_row=0;
    int sum_column=0;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum_row=sum_row + *(*(a+i)+j); //adding rows;
            sum_column=sum_column + *(*(a+j)+i); //adding columns;
        }printf("\n");
        
        printf("sum of row =%d .%d",i+1,sum_row);
        printf("\n");
        printf("sum of column =%d .%d",i+1,sum_column);
        sum_row=0;
        sum_column=0;
    }
    printf("\n");
    
}