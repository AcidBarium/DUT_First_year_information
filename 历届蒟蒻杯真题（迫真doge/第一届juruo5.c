
/*这题显然是递归
写一个函数，把一个正方形分成四份
左上角赦免
然后对剩下的三块正方形重复使用这个函数
*/

#include <stdio.h>
int arr[1100][1100];
// 赦免函数，输入左上坐标与右下坐标
int zhuan(int arr[][1100], int startx, int starty, int endx, int endy)
{
    int i, j;
    if (endx - startx >= 1) // 终止条件，即当一个正方形边长为二的时候终止
    {
        for (i = startx; i <= (startx + endx) / 2; i++) // 赦免左上
        {
            for (j = starty; j <= (starty + endy) / 2; j++)
            {
                arr[i][j] = 1;
            }
        }

        {
            zhuan(arr, (startx + endx) / 2 + 1, starty, endx, (starty + endy) / 2); // 对剩下的三个再次使用这个函数
            zhuan(arr, startx, (starty + endy) / 2 + 1, (startx + endx) / 2, endy);
            zhuan(arr, (startx + endx) / 2 + 1, (starty + endy) / 2 + 1, endx, endy);
        }
    }
}
int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    int sum = 1;
    for (i = 0; i < n; i++)
    {
        sum *= 2;
    }
    zhuan(arr, 0, 0, sum - 1, sum - 1);
    for (i = 0; i < sum; i++)
    {
        for (j = 0; j < sum; j++)
        {
            printf("%d ", !arr[i][j]); // 这里我使了一点小聪明，开始数组全是0，赦免是1，最后用 ！输出，相当于翻了一下
        }
        printf("\n");
    }

    return 0;
}
