#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

int recursionFunction(char s[], int idx)
{
    if (s[idx] == '\0')
    {
        /* code */
        return 0;
    }
    int count = recursionFunction(s, idx + 1);
    // printf("%c", s[idx]);
    if (s[idx] == 'a' || s[idx] == 'e' || s[idx] == 'i' || s[idx] == 'o' || s[idx] == 'u' ||
        s[idx] == 'A' || s[idx] == 'E' || s[idx] == 'I' || s[idx] == 'O' || s[idx] == 'U')
    {
        count++;
    }
    return count;
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int ans = recursionFunction(s, 0);
    printf("%d", ans);
    return 0;
}