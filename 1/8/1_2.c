#include <stdio.h>
int main()
{
    int a[40] = {0};
    int sum = 40;
    int n = -1;
    int cnt = 0;
    int i;
    while(sum > 1)
    {
        n++;
        if(n > 39) n -= 40;
        if(!a[n])
            cnt++;
        if(cnt == 3)
        {
            cnt = 0;
            a[n] = 1;
            sum--;
        }
    }
    for(i = 0; i <= 39; i++)
    {
        if(!a[i])
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    return 0;
}