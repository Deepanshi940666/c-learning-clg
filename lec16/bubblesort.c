#include <stdio.h>
int main()
{
    int a[5] = {30,4,12,5,16};
    int n = sizeof(a) / sizeof(int);
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n -i; j++)
        {
            if (a[j] >a[j + 1])
            {
                int tem = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tem;
            }
           
        }
         printf(" %d", a[i]);
    }
}