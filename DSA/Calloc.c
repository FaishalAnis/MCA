#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int *)calloc(n, sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);  // Free the allocated memory
    return 0;
}