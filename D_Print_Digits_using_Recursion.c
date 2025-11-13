#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

void recursionFunction(int n)
{
    if (n == 0)
    {
        /* code */
        return;
    }
    recursionFunction(n / 10);
    int last = n % 10;
    printf("%d ", last);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            /* code */
            printf("0");
        }

        recursionFunction(n);
        printf("\n");
    }
}