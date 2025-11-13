#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

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
        for (int j = c -1; j >= 0; j--)
        {
            /* code */
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}