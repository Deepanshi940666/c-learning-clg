#include <stdio.h>

int main()
{
    // reverse of digit and find pallindrome

    /*int num, res = 0;
    printf("\nEnter a no.");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        int lastDigit = num % 10;
        res = res * 10 + lastDigit;
        num = num / 10;
    }
    printf("Reverse of no. is %d\n", res);

    if (original == res)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    // factorial

    int fac=1, n;
    printf("Enter a no.");
    scanf("%d",&n);
    int i=n;
    while(i>=1)
    {
        fac=fac*i;
        i--;
    }
    printf("factorial of %d is %d",n,fac);*/

    // prime no.

    int no, i;

    printf("Enter a no.");
    scanf("%d", &no);
    int count = 1;
    // while(count!=0)
    // {
    for (i = 2; i < no; i++)
    {

        // if (count==0)

        if (no % 2 == 0 && no % i == 0)
        {
            count = 0;
            // printf("is not prime ", no);

            break;
        }
        //  printf("is not prime ", no);
        // else{
        //     printf("prime");
        //     break;
        //  }
    }
    if (count!=0)
    {
        printf("not prime", no);
    }
    else
        printf(" prime", no);
    return 0;
}