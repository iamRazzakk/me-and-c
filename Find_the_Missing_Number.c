#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ < / ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/   \_\____|___/____|_|_|  |_|\_\


// Problem Link => https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/find-the-missing-number-11-3z

int main()
{
    int t;
    scanf("%d", &t);

    long long int m, a, b, c;
    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
    }
    for (int i = 0; i < t; i++)
    {
        printf("%lld ", m, a, b, c);
    }

    return 0;
}