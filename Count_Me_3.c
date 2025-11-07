#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-3

int main()
{
    int T;
    scanf("%d", &T);
    char S[100001];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", S);
        int capital = 0, small = 0, digit = 0;
        for (int j = 0; S[j] != '\0'; j++)
        {
            /* code */

            if (S[j] >= 'A' && S[j] <= 'Z')
            {
                /* code */
                capital++;
            }
            else if (S[j] >= 'a' && S[j] <= 'z')
            {
                /* code */
                small++;
            }
            else if (S[j] >= '0' && S[j] <= '9')
            {
                /* code */
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}