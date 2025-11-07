#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link =>Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
// Note : The string will not have any spaces.

int my_len(char *data)
{
    int count = 0;
    for (char i = 0; data[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char n[] = "MDABDURRAZZAKRAKIB";
    int length = my_len(n);
    printf("%d", length);
    return 0;
}