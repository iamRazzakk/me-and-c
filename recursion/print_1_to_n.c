#include <stdio.h>
int recursionFunction(int i, int n)
{
    if (i == n)
    {
        /* code */
        return 0;
    }
    printf("%d\n", i);
    recursionFunction(i + 1, n);
    
}
int main()
{
    int i = 1;
    int n;
    scanf("%d", &n);
    recursionFunction(i, n);
    return 0;
}