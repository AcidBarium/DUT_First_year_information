/*二分查找*/

#include <stdio.h>     //找到大于等于它的第一个下标
int arr[1000006], shuru[1000006];
int n;
int find(int x)
{
    int mid;
    int first = 0, last = n - 1;
    while (first < last)             // 当左小于右的时候就二分找它
    {
        mid = (first + last) / 2;   // 取中间
        if (arr[mid] >= x)           // 如果取在它右边，则将 右界 变成mid
        {
            last = mid;
        }
        else                      // 否则将左界变成mid+1，因为mid不是的，要把mid排掉 所以加一，也保证循环能停下
        {
            first = mid + 1;
        }
    }
    if (arr[first] == x) // 为啥能取到第一个呢，因为当取到它的时候，它只会使右边界变小
        return first;
    else
        return -2;
}
int main()
{
    int m;
    int i;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &shuru[i]);
    }

    for (i = 0; i < m; i++)
    {
        printf("%d ", find(shuru[i]) + 1); // 最后要输出位置，所以加一
    }
    return 0;
}