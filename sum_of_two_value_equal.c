#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (arr[i] + arr[j] == x)
            {
                /* code */
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");

    return 0;
}