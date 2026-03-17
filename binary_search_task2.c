#include <stdio.h>

// Function to perform binary search
int binarySearch(int a[], int n, int search) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == search) {
            return 1; // found
        } else if (a[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0; // not found
}

int main() {
    int n;
    printf("Enter the total number of tickets:\n");
    scanf("%d", &n);

    int a[n];

    // Input
    for (int i = 0; i < n; i++) {
        printf("Enter the ticket number %d:\n", i + 1);
        scanf("%d", &a[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted ticket numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int search;
    printf("Enter the ticket number to be searched:\n");
    scanf("%d", &search);

    int result = binarySearch(a, n, search);

    if (result == 1) {
        printf("Congratulations! You have won the Lottery\n");
    } else {
        printf("Sorry the ticket number %d is not there. Better luck next time!\n", search);
    }

    return 0;
}