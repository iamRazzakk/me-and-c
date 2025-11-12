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
    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            /* code */
            printf("%d ", array[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}