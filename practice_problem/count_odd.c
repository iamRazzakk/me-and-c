#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.

int count_odd(int x[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (x[i] % 2 != 0)
        {
            /* code */
            count++;
        }
    }
    return count;
}
int main()
{

    int arr[] = {1, 5, 4, 10, 2};
    int n = 5;
    int oddValue = count_odd(arr, n);
    printf("%d", oddValue);
    return 0;
}