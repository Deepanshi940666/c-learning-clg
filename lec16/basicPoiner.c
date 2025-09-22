// basic pointer

#include <stdio.h>

int main()
{
    int x = 30;
    int *a = &x;
    float y = 3.14;
    float *b = &y;

    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", a);
    printf("%d", *a);

     printf("%d\n", y);
    printf("%d\n", &y);
    printf("%d\n", b);
    printf("%d", *b);
}
