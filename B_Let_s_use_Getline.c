#include <stdio.h>
int main()
{
    char s[1000001];
    fgets(s,1000001, stdin);
    for (int i = 0; s[i] != '\\'; i++)
    {
        /* code */
        printf("%c", s[i]);
    }
    
    return 0;
}