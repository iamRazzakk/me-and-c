#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-2-1

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int dibidedByTwo = 0;
    int dibidedByThree = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            /* code */
            dibidedByTwo++;
        }
        else if (arr[i] % 3 == 0)
        {
            /* code */
            dibidedByThree++;
        }
    }
    printf("%d %d\n", dibidedByTwo, dibidedByThree);
    return 0;
}