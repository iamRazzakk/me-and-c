#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        /* code */
        int val;
        scanf("%d", &val);
        if (max < val)
        {
            max = val;
            /* code */
        }
    }
    printf("%d", max);
    return 0;
}