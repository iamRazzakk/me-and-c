#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link =>

int count_before_one(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 1) {
            return count;
        }
        count++;

    }
    return count;

}

int main()
{
    int n;
    scanf("%d", & n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", & arr[i]);
    }
    int totalCount = count_before_one(arr, n);
    printf("%d", totalCount);
    return 0;
}