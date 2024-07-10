#include <stdio.h>

void squareArray(int *arr, int size) {
    int *ptr = arr;  
	int i;

    for ( i = 0; i < size; i++) {
        *ptr = (*ptr) * (*ptr);  
        ptr++;  
    }
}

int main() {
	int i;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    squareArray(arr, size);  

    printf("Squared array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

