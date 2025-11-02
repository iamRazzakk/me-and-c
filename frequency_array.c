#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__   /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   /  / | |  / /| | '__| ' /
// |  _ </ ___ | /  /_ | | / /_| | |  | . \
// |_| \_/_/  |_| /____|___/____|_|_| |_|\_\

// Problem Link =>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[6] = {0};

    for (int i = 0; i < n; i++)

    {
        /* code */
        count[arr[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d -> %d\n", i, count[i]);
    } 
    return 0;
}