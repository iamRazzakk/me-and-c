#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/reverse-and-odd

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ", arr[i]);
        /* code */
    }

    int t = n - 1;
    while (t >= 0)
    {
        /* code */
        if (t % 2 == 1)
        {

            printf("%d ", arr[t]);
        }
        t--;
    }

    return 0;
}