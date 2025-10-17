#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/update-and-print

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    int x, y;
    scanf("%d %d", &x, &y);

    arr[x] = y;
    for (int i = n - 1; i >= 0; i--)
    {
        /* code */
        printf("%d ", arr[i]);
    }

    return 0;
}