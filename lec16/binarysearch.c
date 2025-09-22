#include <stdio.h>
#include <limits.h>

int BSearch(int a[5])
{
    int t = 3, s = 0, e = 4;

    while (s <= e)
    {
        int m = (s + e) / 2;
        if (a[m]== t)
        {
            return m;
        }
        else if (a[m] > t)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return -1;
}

int main()
{
    int a[5] = {3, 6, 9, 12, 15};
    int data = BSearch(a);
    printf("%d", data);
    return 0;
}
