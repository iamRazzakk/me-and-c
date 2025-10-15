#include <stdio.h>

int main()
{
    int height = 10;
    int width = 10;
    for (int i = 0; i < width; i++)
    {
        printf("*");
    }
    printf("\n");
    // it's for height;
    for (int i = 0; i < height - 2; i++)
    {
        printf("*");
        for (int j = 0; j < width - 2; j++)
        {
            /* code */
            printf(" ");
        }
        printf(" ");
    }

    for (int i = 0; i < width; i++)
    {
        /* code */
        printf("*");
    }
}