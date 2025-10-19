#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("-1");
        /* code */
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            /* code */
            if (i % 2 == 0)
            {
                /* code */
                printf("%d\n", i);
            }
        }
    }
    return 0;
}