#include <stdio.h>
//  ____    _    _______ _______      _  __
// |  _ \  / \  |__  /_ _|__  (_)_ __| |/ /
// | |_) |/ _ \   / / | |  / /| | '__| ' /
// |  _ </ ___ | / /_ | | / /_| | |  | . \
// |_| \_/_/  |_|/____|___/____|_|_|  |_|\_\

// Problem Link =>Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

int my_abs(int p)
{
    if (p < 0)
    {
        /* code */
        p = -p;
    }

    return p;
}

int main()
{
    int x = -6;
    int data = my_abs(x);
    printf("%d", data);
    return 0;
}