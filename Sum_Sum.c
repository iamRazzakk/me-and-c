#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\5 -3 9 -10 2 8

// Problem Link =>

int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int sumNumber = 0;
    int negNumber = 0;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        // printf("%d ", n);

        if (n > 0)
        {

            sumNumber = sumNumber + n;
        }
        else if (n < 0)
        {

            negNumber = negNumber + n;
        }
    }
    printf("%d %d\n", sumNumber, negNumber);

    return 0;
}
