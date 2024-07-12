

/*写一下思路吧，每到一个车站，看看是不是最比前几个便宜，如果便宜，就买够到下一个车站的，
如果下一个车站贵，则继续买上一家的，，如果便宜则更新最便宜的，买这一家的
注意long long
*/

#include <stdio.h>
#include <math.h>
int ZhanDian = 0, Meigongli = 0, i = 0, j = 0;
int JuLi[100006], YouJia = 0;
long long Zongjiage = 0;
long long Muqianjuli = 0;
long long YiJingPao = 0;
int main()
{
    scanf("%d %d", &ZhanDian, &Meigongli);
    for (i = 1; i <= ZhanDian - 1; i++)
    {
        scanf("%d", &JuLi[i]);
    }
    JuLi[ZhanDian] = 0;
    int min = 100005;           //初始化一个大数
    for (i = 1; i <= ZhanDian; i++)
    {
        scanf("%d", &YouJia);
        if (min > YouJia)
        {
            min = YouJia;
        }
        Muqianjuli += JuLi[i];
        int n = ceil(1.0*(Muqianjuli) / Meigongli);

        if (n < 0)
        {
            n = 0;
        }

        Muqianjuli -= n * Meigongli;
        Zongjiage += (long long)n * min;

    }
    printf("%lld", Zongjiage);
    return 0;
}