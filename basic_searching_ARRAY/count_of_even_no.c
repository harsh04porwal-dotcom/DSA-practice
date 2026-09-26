// Given an array, count how many elements are even.
#include <stdio.h>

int countEven(int arr[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            count++;
        }
    }
    return count;
}                

int main() 
{
     printf("Enter the size of array: ");
    int size;
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int evenCount = countEven(arr, size);
    printf("The number of even elements in the array is: %d\n", evenCount);
    printf("The even elements in the array are: ");
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}