#include <stdio.h>
#include <string.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-4

int main()
{
    char text[1000000];
    scanf("%s", text);
    int free_arr[26] = {0};
    for (int i = 0; i < strlen(text); i++)
    {
        /* code */
        int idx = text[i] - 'a';
        free_arr[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        /* code */
        if (free_arr[i] != 0)
        {
            /* code */
            // a - 1 
            printf("%c - %d\n", 'a' + i, free_arr[i]);
        }
    }

    return 0;
}