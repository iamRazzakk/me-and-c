#include <stdio.h>
void recursionFunction(int current, int i)
{
    if (current > i)
    {
        /* code */
        return ;
    }
    printf("%d\n", current);
    recursionFunction(current + 1 , i);
}
int main()
{
    int i;
    scanf("%d", &i);
    recursionFunction(1,i);
    return 0;
}