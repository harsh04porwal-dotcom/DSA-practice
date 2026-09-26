// Write a function that calculates the sum of all elements in an array.
// Write a function that calculates the average of all elements.
// Write a function that counts how many numbers are positive and how many are negative.
// Write a function that counts how many times a given number X appears in an array.
// Given an array, find the second largest element.
// Write a function to reverse a string.
// Write a function that checks whether an array is a palindrome.


#include <stdio.h>      

// Function to calculate the sum of all elements in an array

int sum_Array(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum = sum + arr[i];
    }
    return sum;
}

// Function to calculate the average of all elements in an array

float averageArray(int arr[], int n) 
{
     int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum = sum + arr[i];
    }
    return (float)sum / n;
}

// Function to count positive and negative numbers in an array

void count_Positive_Negative(int arr[], int n, int *positive, int *negative)
{
    *positive = 0;
    *negative = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > 0) 
        {
            (*positive)++;
        } 
        else if (arr[i] < 0) 
        {
            (*negative)++;
        }
    }
}

// Function to count how many times a given number X appears in an array.

int count_occurrences(int arr[], int n, int x) 
{
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) 
        {
            count++;
        }
    }
    return count;
}

// Function to find the second largest element in an array

int second_Largest(int arr[], int n)
{
    if (n < 2) 
    {
        return -1; // Not enough elements for second largest
    }

    int first;
    int second;

    if(arr[0] > arr[1]) 
    {
        first = arr[0];
        second = arr[1];
    } 
    else 
    {
        first = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < n; i++) 
    {
        if (arr[i] > first) 
        {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }

    return second;
}

// Function to reverse a string

void reverse_String(char str[])
{
    int start = 0;
    int end = 0;

    // Find the length of the string
    while (str[end] != '\0')        // (\0 is the null character that marks the end of a string in C)
    {
        end++;  // Increment end to find the length of the string
    }
    end--; // Set to last character index

    // Reverse the string in place
    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to check whether an array is a palindrome

int is_Palindrome(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end) 
    {
        if (arr[start] != arr[end]) 
        {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calculate sum
    int sum = sum_Array(arr, n);
    printf("Sum of array elements: %d\n", sum);

    // Calculate average
    float avg = averageArray(arr, n);   
    printf("Average of array elements: %.2f\n", avg);

    // Count positive and negative numbers
    int positive, negative;
    count_Positive_Negative(arr, n, &positive, &negative);
    printf("Positive numbers: %d, Negative numbers: %d\n", positive, negative);

    // Count occurrences of a number
    int x = 2;
    int occurrences = count_occurrences(arr, n, x);
    printf("Occurrences of %d: %d\n", x, occurrences);

    // Find second largest element
    int secondLargest = second_Largest(arr, n);
    if (secondLargest != -1) 
    {
        printf("Second largest element: %d\n", secondLargest);
    } 
    else 
    {
        printf("Not enough elements for second largest.\n");
    }

    // Reverse a string
    char str[] = "Hello";
    reverse_String(str);
    printf("Reversed string: %s\n", str);

    // Check if array is a palindrome
    if (is_Palindrome(arr, n)) 
    {
        printf("The array is a palindrome.\n");
    } 
    else 
    {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}