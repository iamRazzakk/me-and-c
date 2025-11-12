#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            scanf("%d", &array[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int fleg = 0;
    /* code */
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            if (array[i][j] == x)
            {
                /* code */
                fleg = 1;
                break;
            }
        }
    }
    if (fleg == 1)
    {
        /* code */
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}