#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int x)
{
    int r;
    int a = m;
    int b = x;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return abs(a);
}

int main(void)
{
    int n;
    int ans;

    scanf("%d", &n);

    if (n > 9966990)
    {
        printf("NG");
        return 0;
    }

    ans = gcd(9966990, n);

    printf("%d", ans);

    return 0;
}