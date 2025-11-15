#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\
 
// Problem Link => https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/magical-tree-3
 
int main()
{
    int n;
    scanf("%d", &n);
    // int h = n + 5;
    int h = (n / 2) + 5 + 1;
    int w = (2 * h) - 1;
    
    for (int i = 0; i < h; i++)
    {
        /* code */
        int star = (2 * i) + 1;
        int space = (w - star) / 2;
 
        for (int j = 0; j < space; j++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 0; j < star ; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
 
    int downHeight = 5;
    int space = (w -n) / 2;
    for (int i = 0; i < downHeight; i++)
    {
        /* code */
 
        for (int j = 0; j < space; j++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}