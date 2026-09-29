// Write a program to find whether an array contains any duplicate element.
// Move all 0s to the end while keeping the order of the other elements unchanged.

#include <stdio.h>  

// Function to check for duplicates in an array
int duplicate(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                return 1; // Duplicate found
            }
        }
    }
    return 0; // No duplicates
}

// Function to move all 0s to the end of the array
void moveZerosToEnd(int arr[], int n) 
{
    int count = 0; // Count of non-zero elements

    // Move all non-zero elements to the beginning
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            arr[count++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (count < n) 
    {
        arr[count++] = 0;
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    if (duplicate(arr, n)) 
    {
        printf("The array contains duplicate elements.\n");
    } 
    else 
    {
        printf("The array does not contain any duplicate elements.\n");
    }

    moveZerosToEnd(arr, n);
    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}