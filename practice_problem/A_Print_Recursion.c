#include <stdio.h>
void recursibFunction( int i){
    if (i == 0)
    {
        /* code */
        return ;
    }
    char myText[] = "I love Recursion";
    recursibFunction(i - 1);
    printf("%s\n", myText);
}
int main()
{
    int i;
    scanf("%d", &i);
    recursibFunction(i);
    return 0;
}