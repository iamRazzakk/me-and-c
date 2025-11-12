#include <stdio.h>
void recursionFunction(int current, int i)
{
    if (current > i)
    {
        /* code */
        return ;
    }
    recursionFunction(current + 1 , i);
    if (current % 2 == 0)
    {
        /* code */
        printf("%d\ ", current);
    }else{
        printf("%d\ ", current);
    }
    recursionFunction(current + 1 , i);
    
}
int main()
{
    int i;
    scanf("%d", &i);
    recursionFunction(1,i);
    return 0;
}