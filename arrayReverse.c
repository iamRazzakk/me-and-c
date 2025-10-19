#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int j = n - 1;
    //
    while (i < j)
    {
        /* code */
        int tem = arr[i];
        arr[i] = arr[j];
        arr[j] = tem;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }

    return 0;
}