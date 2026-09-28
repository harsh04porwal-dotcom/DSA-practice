// Write a function that finds both the maximum and minimum element of an array.

#include <stdio.h>

int find_max_min(int arr[], int n, int *max, int *min) //In C, the expression *max means “the value stored at the memory address pointed to by max.” Here, max is a pointer to an integer, not an integer itself. So max holds an address, and *max lets us read or write the actual integer located there.
{
    if (n <= 0) 
    {
        return -1;
    }

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < *min) 
        {
            *min = arr[i];
        }
        if (arr[i] > *max) 
        {
            *max = arr[i];
        }
    }

    return 0;
}

int main(void) {
    int arr[] = {12, 5, 9, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    find_max_min(arr, n, &max, &min);

    printf("Maximum: %d\nMinimum: %d\n", max, min);
    return 0;
}