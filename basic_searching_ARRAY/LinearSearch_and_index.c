// Write a function that searches for an element X in an array.If found, return its index. If not found, return -1.

#include <stdio.h>

int search(int arr[], int size, int x)
{
    for (int i=0; i < size; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);
    int arr[size];      
    printf("Enter the elements of the array: ");
    for (int i=0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }   
    printf("Enter the element to search: ");
    int x;
    scanf("%d", &x);
    int result = search(arr, size, x);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("-1\n");
}