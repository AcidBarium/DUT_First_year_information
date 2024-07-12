

#include <stdio.h>
int main()
{
    int i, j;
    int arr[30][100] = {0};
    arr[1][1] = 1;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            arr[1][1] = 1;

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}