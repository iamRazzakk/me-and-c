#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { 
        /* code */
        for (int j = i; j <=n; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}