#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-08/challenges/even-and-odd-8-2
void odd_even()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] % 2 == 0)
        {
            /* code */
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n", even, odd);
}
int main()
{

    odd_even();
    return 0;
}