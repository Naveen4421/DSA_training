#include <stdio.h>

// Function to perform binary search
int main(){
    int n,j,key;
    printf("Enter the total number of student :\n");
    scanf("%d",&n);
    int a[n];
    int search;
    for(int i=0;i<n;i++){
    printf("Enter the height of the student %d:\n",i+1);
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if (a[i] > a[i + 1]) {
            j = i;         // Start checking from the current sorted index
            key = a[i + 1]; // This is the element to be moved back

            while (j >= 0) {
                if (a[j] > key) { // Check if element on left is greater
                    a[j + 1] = a[j]; // Shift element to the right
                    j--;
                } else {
                    break; // Correct spot found, stop loop
                }
            }
            a[j + 1] = key; // Put the element in its correct place
        }
    }
    printf("After final comparison of all students ,heights order became :\n");
    for(int i=0;i<n;i++){
    //printf("Enter the height of the student %d:\n",i+1);
    printf("%d  ",a[i]);
    }
    
    
    
    return 0;
}