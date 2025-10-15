// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
// #include <stdio.h>
// int main()
// {
//     long long int x;
//     long long int y;
//     scanf("%lld %lld", &x, &y);
//     long long int summation = x + y;
//     long long int multiplication = x * y;
//     long long int subtraction = x - y;

//     printf("%lld + %lld = %lld\n", x, y, summation);
//     printf("%lld * %lld = %lld\n", x, y, multiplication);
//     printf("%lld - %lld = %lld\n", x, y, subtraction);
// }

//     Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D).
#include <stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int multi1 = a * b;
    long long int multi2 = c * d;
    long long int finalAns = multi1 - multi2;
    printf("Difference = %lld\n", finalAns);
    return 0;
}
