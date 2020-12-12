#include <stdio.h>

void quicksort(int a[], int left, int right)
{
    int i = left, j = right;
    int middle = a[(left + right)/2];
    do
    {
        while (a[i] < middle)
        {
            i++;
        }
        while (a[j] > middle)
        {
            j--;
        }
        if (i <= j)
        {
            if (a[i] > a[j])
            {
                int p = a[i];
                a[i] = a[j];
                a[j] = p;
            }
            i++;
            j--;
        }
    } while (i <= j);
    if (i < right)
    {
        quicksort(a, i, right);
    }
    if (left < j)
    {
        quicksort(a, left, j);
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
    quicksort(a, 0, n-1);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
