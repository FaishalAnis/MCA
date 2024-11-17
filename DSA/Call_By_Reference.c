#include <stdio.h>

void updateArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + 5; // Update array elements
    }
    
    printf("\nArray inside function (after update): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array before function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    updateArray(arr, size);
    
    printf("\nArray in main after function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
