#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target, found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d.\n", i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Element not found.\n");
    }
    
    free(arr);  // Free the allocated memory
    return 0;
}
