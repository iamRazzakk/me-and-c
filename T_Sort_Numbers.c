#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int A = a, B = b, C = c;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}