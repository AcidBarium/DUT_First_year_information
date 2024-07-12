

/*比较简单*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int days = 0;
    int aaaaa;
    int i;
    int pan = 1;
    while (n > 0)
    {
        days++; // 每次天数多一天
        int take = 0;
        for (i = 1; i <= n; i += 3) // 把满足条件的苹果数量记下来
        {
            take++;
        }
        if (i - 3 == n) // 如果n满足了，就把这一天记下来，注意要记第一次满足的的
        {
            if (pan)
            {
                aaaaa = days;
                pan = 0;
            }
        }
        n -= take; // 把满足条件的苹果拿走
    }

    printf("%d %d", days, aaaaa);

    return 0;
}
