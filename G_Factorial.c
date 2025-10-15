#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T > 0)
    {
        int N;
        scanf("%d", &N);

        
        long long factorial = 1;
        for (int i = 1; i <= N; i++)
        {
            factorial *= i;
        }

        printf("%lld\n", factorial);

        T--;
    }

    return 0;
}
