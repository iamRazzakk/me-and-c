#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int leng_a = strlen(a);
    int leng_b = strlen(b);
    for (int i = 0; i <= leng_b; i++)
    {
        /* code */
        a[i + leng_a] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}