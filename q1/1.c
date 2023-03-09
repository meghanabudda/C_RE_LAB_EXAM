#include <stdio.h>

int findLargest(int arr[], int n);
int findSmallest(int arr[], int n);


int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, n);
    int smallest = findSmallest(arr, n);

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}

int findLargest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int largest = findLargest(arr, n - 1);

    if (arr[n - 1] > largest) {
        return arr[n - 1];
    } else {
        return largest;
    }
}

int findSmallest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int smallest = findSmallest(arr, n - 1);

    if (arr[n - 1] < smallest) {
        return arr[n - 1];
    } else {
        return smallest;
    }
}