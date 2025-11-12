#include <stdio.h>
void recursionArrayUsingFunction(int array[], int n, int i)
{
    if (i == n)
    {
        /* code */
        return ;
    }
    
    printf("%d\n", array[i]);
    recursionArrayUsingFunction(array, n, i + 1);
}
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

    recursionArrayUsingFunction(array, n, 0);

    return 0;
}