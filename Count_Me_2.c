#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-2-2

int main()
{
    char character[100001];
    scanf("%s", character);
    int countNumber = 0;
    for (int i = 0; character[i] != '\0'; i++)
    {
        if (character[i] != 'a' && character[i] != 'e' && character[i] != 'i' && character[i] != 'o' && character[i] != 'u')
        {
            /* code */
            countNumber++;
        }
    }
    printf("%d\n", countNumber);

    return 0;
}