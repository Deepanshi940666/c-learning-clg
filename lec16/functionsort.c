#include <stdio.h>

int sort(int a[5])
{
    int n = sizeof(a) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tem = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tem;
            }
        }
        printf(" %d", a[i]);
    }
    return 0;
}
int main()
{
    int a[5] = {30, 56, 31, 4, 6};
    int data=sort(a);
    printf("%d",data);
   
}
