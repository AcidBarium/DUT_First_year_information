
#include <stdio.h>
#include <string.h>

int prime[100000008];   // 用于存放素数
int isPrime[100000008]; // 用于判断素数
int cnt = 0;            // 用于记录素数
int n;
int q;
int i = 0;
int arr[1000006];

int main()
{
    scanf("%d", &n);
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d", &arr[i]);
    }

    memset(isPrime, 1, sizeof(isPrime)); // 先把所有设置为1，表示认为所有数是素数

    isPrime[1] = 0; // 但是1不是

    for (i = 2; i < n; i++) // 从2开始判断
    {
        if (isPrime[i]) // 如果是素数
        {
            ++cnt; // 记录的数量加一，放到素数库里面
            prime[cnt] = i;
        }

        // j<=cnt表示把已知素数走一遍，  i * prime[j] <= n表示不去验证范围之外的，
        for (int j = 1; j <= cnt && i * prime[j] <= n; j++)
        {
            isPrime[i * prime[j]] = 0; // 令被选中的数为0，表示它表示素数

            if (i % prime[j]==0) // 我们希望prime[j]是其最小的质因数，保证时间
            {
                break;
            }
        }
    }

    for (i = 0; i < q; i++)
    {
        printf("%d\n", prime[arr[i]]);
    }
    return 0;
}

// 但是说实话，这个题很阴间，做不出来也不怪大家，我用的时间刚刚好过去  还是c o2过的  QAQ