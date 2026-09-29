// Find the smallest element in an array.
#include <stdio.h>

int smallest(int arr[], int size)
{
    int min = arr[0];
    for (int i=1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {5, 2, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = smallest(arr, size);
    printf("The smallest element in the array is: %d\n", min);

    return 0;
}