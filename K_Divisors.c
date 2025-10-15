#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            /* code */
            printf("%d\n", i);
        }
    }
    return 0;
}