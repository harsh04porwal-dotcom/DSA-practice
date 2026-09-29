//Write a program that takes an array and a number X, and checks whether X is present in the array.

#include <stdio.h>
#include <stdbool.h>

bool isPresent(int arr[], int size, int X) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == X) {
            return true;
        }
    }
    return false;
}

int main() {
    printf("Enter the size of array: ");
    int size;
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int X;
    printf("Enter the element to search: ");
    scanf("%d", &X);

    if (isPresent(arr, size, X)) {
        printf("Element %d is present in the array.\n", X);
    } else {
        printf("Element %d is not present in the array.\n", X);
    }

    return 0;
}
