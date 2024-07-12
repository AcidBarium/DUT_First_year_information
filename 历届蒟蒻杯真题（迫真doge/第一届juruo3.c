/*这一题
主要就是特判
（）和（））（（）
当出现一个左括号时 令一个数++
当出现一个右括号时 令它--；
如果存在某个时刻这个数小于0了，则不对
*/

#include <stdio.h>
int main()
{
    int left = 0;
    int right = 0;
    int pan = 0;
    char c;
    char str[1000];
    int i = 1;
    while (1)
    {
        c = getchar();
        str[i] = c;
        if (c == '(')
        {
            pan++;
            left++;
        }
        if (c == ')')
        {
            if (str[i - 1] == '(') // 出现括号里面什么都没有
            {
                printf("NO");
                return 0;
            }
            pan--;
            if (pan < 0) // 如果右括号比左括号多
            {
                printf("NO");
                return 0;
            }
            right++;
        }
        if (c == '@')
            break;
        i++;
    }
    if (left == right && !pan)
        printf("YES");
    else
        printf("NO");
    return 0;
}