#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &array[i]);
    }
    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        printf("%d ", array[first]);
        first++;
        if (first <= last)
        {
            /* code */
            printf("%d ", array[last]);
            last--;
        }

        /* code */
    }

    return 0;
}