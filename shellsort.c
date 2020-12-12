#include <stdio.h>

void shell(int a[], int n)
{
    int i, j, s, p;
    for (s = n / 2; s > 0; s /= 2)
    {
        for (i = s; i < n; i++)
        {
            for (j = i - s; (j >= 0) && (a[j] > a[j + s]); j -= s)
            {
                p = a[j];
                a[j] = a[j + s];
                a[j + s] = p;
            }
        }
    }
}

int main()
{
    int a[1000];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    shell(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
