#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link =>https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-08/challenges/pattern-2-21-4

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n-i-1; space++)
        {
            /* code */
            printf(" ");
        }

        /* code */
        for (int j = i + 1; j >= 1; j--)
        {
            /* code */
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}