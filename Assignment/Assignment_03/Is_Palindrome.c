#include <stdio.h>
#include <string.h>

//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \madam
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link => https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-08/challenges/is-palindrome-15
int is_palindrome(char s[])
{
    int length = strlen(s);
    int first = 0;
    int last = length - 1;

    while (first < last)
    {
        /* code */
        if (s[first] != s[last])
        {
            /* code */
            return 0;
        }
        first++;
        last--;
    }
    return 1;
}

int main()
{
    char s[1001];;
    scanf("%s", s);
    // printf("%s", s);
    int result = is_palindrome(s);
    if (result == 1)
    {
        /* code */
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}