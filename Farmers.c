#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/farmers-1

int main()
{
    int T;
    scanf("%d", &T);
    int M1[T], M2[T], D[T];
    for (int i = 0; i < T; i++)
    {
        /* code */
        scanf("%d %d %d", &M1[i], &M2[i], &D[i]);
    }

    for (int i = 0; i < T; i++)
    {
        int singleOneTakeTime = M1[i] * D[i];
        int extraPersonTakeTime = singleOneTakeTime / (M1[i] + M2[i]);
        int differentDay = D[i] - extraPersonTakeTime;

        if (differentDay < 0)
        {
            /* code */
            differentDay = 0;
        }
        printf("%d\n", differentDay);
    }

    return 0;
}