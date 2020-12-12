#include <stdio.h>

void heapbuild(int a[], int n, int i)
{
    int root = i;
    int i1 = 2*i + 1;
    int i2 = 2*i + 2;
    if (a[i1] > a[root] && i1 < n)
    {
        root = i1;
    }
    if (a[i2] > a[root] && i2 < n)
    {
        root = i2;
    }
    if (root != i)
    {
        int p = a[root];
        a[root] = a[i];
        a[i] = p;
        heapbuild(a, n, root);
    }
}

void heapsort(int a[], int n)
{
    int i;
    for (i = n/2 - 1; i >= 0; i--)
    {
        heapbuild(a, n, i);
    }
    for (i = n - 1; i >= 0; i--)
    {
        int p = a[0];
        a[0] = a[i];
        a[i] = p;
        heapbuild(a, i, 0);
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
    heapsort(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
