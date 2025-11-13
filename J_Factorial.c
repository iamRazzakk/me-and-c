#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

long long int recursionFunction(int n)
{
    // n * (n - 1) * (n -2);
    if (n == 0 || n == 1)
    {
        /* code */
        return 1;
    }
    return n * recursionFunction(n - 1);
}

int main()

{
    long long int n;
    scanf("%lld", &n);
    long long int ans = recursionFunction(n);
    printf("%lld", ans);
    return 0;
}