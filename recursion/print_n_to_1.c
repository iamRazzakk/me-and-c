#include <stdio.h>
int recursionFunction(int n, int i)
{
    if (n == 1)
    {
        /* code */
        return 0;
    }
    printf("%d\n", n);
    recursionFunction(n - 1, i);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    recursionFunction(n, i);
    return 0;
}