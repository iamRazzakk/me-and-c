#include <stdio.h>
#include <stdlib.h>
// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
int main()
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int primarySum = 0;
    int secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        primarySum+=array[i][i];
        secondarySum+=array[i][n -i - 1];

    }
    int different = abs(primarySum - secondarySum);
    printf("%d\n", different);

    return 0;
}