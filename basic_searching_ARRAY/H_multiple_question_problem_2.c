// Write a program to find whether an array contains any duplicate element.
// Move all 0s to the end while keeping the order of the other elements unchanged.
// Write a function to remove duplicate elements.
// Given an array and a target X, find two elements whose sum equals X.

#include <stdio.h>  

// Function to check for duplicates in an array
int duplicate(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
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
void moveZerosToEnd(int arr[], int size) 
{
    int count = 0; // Count of non-zero elements

    // Move all non-zero elements to the beginning
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] != 0) 
        {
            arr[count++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (count < size) 
    {
        arr[count++] = 0;
    }
}

// Function to remove duplicate elements from an array
int removeDuplicates(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return size;  // No duplicates possible
    }

    int j = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }

    arr[j] = arr[size - 1];
    j++;

    return j;
}

// Function to find two elements in an array whose sum equals a target value
void findTwoElementsWithSum(int arr[], int size, int target) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] + arr[j] == target) 
            {
                printf("Elements found: %d and %d\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("No elements found with the sum equal to %d\n", target);
}

int main()
{

    /*

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    */
 int arr[] = {1, 2, 3, 4, 5, 0, 0, 6, 7, 8, 0, 9, 10, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int check;
    check = duplicate(arr, size);
    if (check)
    {
        printf("The array contains duplicate elements.\n");
    } 
    else 
    {
        printf("The array does not contain any duplicate elements.\n");
    }

    int arr_1[] = {1, 2, 3, 4, 5, 0, 0, 6, 7, 8, 0, 9, 10, 1, 2};
    int size_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    moveZerosToEnd(arr_1, size_1);
    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < size_1; i++) 
    {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    int arr_2[] = {1, 2, 3, 4, 5, 0, 0, 6, 7, 8, 0, 9, 10, 1, 2};
    int size_2 = sizeof(arr_2) / sizeof(arr_2[0]);
    int newSize = removeDuplicates(arr_2, size_2);
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) 
    {
        printf("%d ", arr_2[i]);
    }
    // print size of new array
    printf("\nSize of the new array after removing duplicates: %d", newSize);
    printf("\n");

    int arr_3[] = {2, 7, 11, 15};
    int size_3 = sizeof(arr_3) / sizeof(arr_3[0]);
    int target = 9;
    findTwoElementsWithSum(arr_3, size_3, target);

    return 0;
}