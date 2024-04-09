#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        printf("Value checked array[0] = [%d]\n", *array);
        printf("Array is NULL\n");
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i; // Found the value, return its index
        }
    }
    
    // Value not found in array
    printf("Value %d not found in the array\n", value);
    return -1;
}

