📝 C Language — Quick Revision Notes

1. # Basic Structure

#include <stdio.h>
int main()
{
    // code
    return 0;
}

~ #include <stdio.h> → gives printf(), scanf()
~ main() → program starts here
~ return 0 → program ended successfully

2.  # Variables & Data Types

int age = 21;
float price = 10.5;
char grade = 'A';
double value = 20.12345;
Type	Example	Format
int	10	%d
float	10.5	%f
double	10.55	%lf
char	'A'	%c
string	"Hello"	%s

3. # Input / Output

Output:
printf("Hello");
printf("%d", age);

Input:
scanf("%d", &age);

*Remember*:
**&age-means address of age.**

4. # Operators

**Arithmetic** 

+    Addition
-    Subtraction
*    Multiplication
/    Division
%    Remainder

Example: 10 % 3 = 1

**Comparison**

==    equal
!=    not equal
>     greater
<     smaller
>=    greater/equal
<=    smaller/equal

**Logical**

&&    AND
||    OR
!     NOT

5. # If-Else

if (age >= 18)
{
    printf("Adult");
}
else
{
    printf("Minor");
}

**Multiple conditions:**

if (marks >= 90)
{
    printf("A");
}
else if (marks >= 60)
{
    printf("B");
}
else
{
    printf("C");
}

6. # Loops

**For Loop** ⭐

for (int i = 0; i < 5; i++)
{
    printf("%d", i);
}

Think:  start → condition → work → update

**While Loop**

while (condition)
{
    // code
}

**Do-While**

do
{
    // code
}
while (condition);

*Difference: do-while executes at least once.*

7. # Arrays ⭐⭐⭐

int arr[] = {10, 20, 30, 40, 50};

Index starts from 0:

Index:  0   1   2   3   4
Value: 10  20  30  40  50

Access:

arr[0]   // 10
arr[2]   // 30
Array size
int n = sizeof(arr) / sizeof(arr[0]);

8. # Strings

char name[] = "Harsh";

Actually stored as:

H a r s h \0

'\0' = end of string.

Useful functions:

strlen(str);     // length
strcpy(a, b);    // copy
strcmp(a, b);    // compare
strcat(a, b);    // join

*Header: #include <string.h>*

9. # Functions ⭐⭐⭐

**Basic function:**

int add(int a, int b)
{
    return a + b;
}

**Call:**

int result = add(5, 3);
Void function
void printHello()
{
    printf("Hello");
}

*void → returns nothing.*

10. # Pass by Value vs Pointer

**Normal:**

void change(int x)
{
    x = 20;
}

Original variable doesn't change.

**Using pointer:**

void change(int *x)
{
    *x = 20;
}

**Call:**

change(&a);

*Remember*
& → address of variable
* → value at that address

11. # Pointers ⭐⭐⭐

int x = 10;
int *p = &x;

Think:
x = 10
 ↓
address
 ↓
p

p → stores address.
*p → gets value at that address.
*p = 20;

Now: x = 20

12. # Structures

Used to store different types together.

struct Student
{
    int age;
    char grade;
};

**Create:**

struct Student s;

s.age = 21;
s.grade = 'A';

**Access using:**

s.age
s.grade

13. # Switch

Useful when you have multiple fixed choices.

switch(choice)
{
    case 1:
        printf("One");
        break;

    case 2:
        printf("Two");
        break;

    default:
        printf("Invalid");
}

14. # Break & Continue

**break**
Stops the loop.

for(...)
{
    if (i == 5)
        break;
}

**continue**
Skips the current iteration.

for(...)
{
    if (i == 5)
        continue;
}

15. # Common DSA Patterns ⭐⭐⭐

**Array traversal**

for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
 
**Find maximum**

int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
        max = arr[i];
}

**Linear search**

for (int i = 0; i < n; i++)
{
    if (arr[i] == X)
        return 1;
}

return 0;

**Swap**

int temp = a;
a = b;
b = temp;

**Two pointers**

int start = 0;
int end = n - 1;

while (start < end)
{
    // work

    start++;
    end--;
}

*You've already used this for reverse + palindrome. 🔥*

16. # Dynamic Memory — Just Know the Basics

malloc()
calloc()
realloc()
free()

Example:
int *arr = malloc(n * sizeof(int));

Release memory:
free(arr);
*You'll need this more when you reach advanced DSA.*

17. # File Handling — Basic Idea

FILE *fp;
fp = fopen("data.txt", "r");

fclose(fp);

Modes:
"r" → read
"w" → write
"a" → append

Not very important for your current DSA preparation.

18. # Recursion ⭐

A function calling itself.

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

Important parts:

Base condition
      ↓
Recursive call

You'll need recursion later for trees, backtracking, DFS, etc.