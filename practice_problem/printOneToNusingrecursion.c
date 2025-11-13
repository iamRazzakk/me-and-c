#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

int myRecursionFunction(int n)
{
    if (n == 1)
    {
        /* code */
        printf("1");
        return 0;
    }
    printf("%d\n", n);
    myRecursionFunction(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    myRecursionFunction(n);
    return 0;
}