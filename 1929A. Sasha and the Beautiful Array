#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (used for sorting)
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d", &t); // Input number of test cases

    while (t--)
    {
        int n;
        scanf("%d", &n); // Input length of the array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]); // Input elements of the array
        }

        // Sorting the array in ascending order
        qsort(a, n, sizeof(int), compare);

        // Calculating the maximum beauty of the array
        int beauty = 0;
        for (int i = 1; i < n; i++)
        {
            beauty += (a[i] - a[i - 1]);
        }

        printf("%d\n", beauty);
    }

    return 0;
}

