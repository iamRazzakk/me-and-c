// In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.

// Constraints
// -1000 <= N <= 1000
// Input format
// The input consists of an integer N.
// Output Format
// Print  Zero if the number is equals to 0 and Non Zero Otherwise.
// Sample Input 1
// 5
// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     scanf("%d", &a);  // Corrected
//     if (a == 0)
//     {
//         printf("Zero");
//     }
//     else
//     {
//         printf("Non Zero");
//     }
//     return 0;
// }

// Time Limit: 1 Seconds

// Memory Limit: 2.93 MB

// Statement
// In this problem you will be given an integer number N. You will have to add 5 with N and print it.

// Constraints
// - 1 <= N  <= 100

// Input format
// Input consists of an integer number N.
// Output Format
// Output the result after adding 5 with N.
// Sample Input 1
// 100
// Sample Output 1
// 105
#include <stdio.h>
int main()
{
    int a = 100;
    // scanf("%d", &a); // Corrected
    const b = a + 5;
    printf(b);
    return 0;
}