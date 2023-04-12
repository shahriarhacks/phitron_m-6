#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, a;
    int mx = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (mx < a)
        {
            mx = a;
        }
    }
    printf("%d", mx);
    return 0;
}