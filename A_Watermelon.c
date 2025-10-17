#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link =>https://codeforces.com/problemset/problem/4/A

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 2)
    {
        /* code */
        printf("NO");
        return 0;
    }

    if (n % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}