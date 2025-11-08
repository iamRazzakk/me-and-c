#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-08/challenges/pattern-255-1

int main()
{
    int n;
    scanf("%d", &n);
    int value = 1;
    int space = n - 1;
    char hash = '#';
    char underScore = '-';
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            /* code */
            printf(" ");
        }

        char printChar;
        if (i % 2 == 0)
        {
            /* code */
            printChar = hash;
        }
        else
        {
            printChar = underScore;
        }
        // piramid
        for (int j = 0; j < value; j++)
        {
            printf("%c", printChar);
        }
        printf("\n");
        value += 2;
        space--;
    }
    // next part
    value -= 4;
    space = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        for (int s = 0; s < space; s++)
        {
            /* code */
            printf(" ");
        }
        char printChar;
        if (i % 2 == 0)
        {
            printChar = hash;
        }
        else
        {
            printChar = underScore;
        }

        for (int j = 0; j < value; j++)
        {
            /* code */
            printf("%c", printChar);
        }
        printf("\n");

        value -= 2;
        space++;
    }

    return 0;
}