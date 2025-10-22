#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == "\0" && b[i] == "\0")
    //     {
    //         printf("%s\n", a);
    //         break;
    //         /* code */
    //     }
    //     else if (a[i] == "\0")
    //     {
    //         /* code */
    //         printf("%s\n", a);

    //         break;
    //     }
    //     else if (b[i] == "\0")
    //     {
    //         /* code */
    //         printf("%s\n", b);

    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("%s\n", a);
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("%s\n", b);
    //         break;
    //     }
    //     else
    //     {
    //         i++;
    //     }

    //     /* code */
    // }
    int value = strcmp(a, b);
    if (value <= 0)
    {
        printf("%s\n", a);
    }
    else
    {
        printf("%s\n", b);
    }

    

    return 0;
}