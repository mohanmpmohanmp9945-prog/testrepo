#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return index if element is found
        }
    }
    return -1;  // Return -1 if element is not found
}

int main() {
    int arr[] = {10, 25, 30, 45, 50, 65};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}