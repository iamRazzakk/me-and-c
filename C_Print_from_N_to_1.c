#include <stdio.h>
void recursionFunction(int current, int i)
{
    if (current > i)
    {
        /* code */
        return ;
    }
    recursionFunction(current + 1 , i);
    printf("%d\ ", current);
}
int main()
{
    int i;
    scanf("%d", &i);
    recursionFunction(1,i);
    return 0;
}