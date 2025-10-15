#include <stdio.h>
int main()
{
    int n;
    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        // printf("%d\n", x);
        if (x % 2 == 0)
        {
            /* code */
            even++;
        }
        else
        {
            odd++;
        }
        //
        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }
    }
    // Even: 3
    // Odd: 2
    // Positive: 1
    // Negative: 3
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}