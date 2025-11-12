#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int array[r][c];
    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            /* code */
            scanf("%d", &array[i][j]);
        }
    }
    int specific_row;
    scanf("%d", &specific_row);
    for (int k = 0; k < r; k++)
    {
        /* code */
        printf("%d ", array[specific_row][k]);
    }

    return 0;
}