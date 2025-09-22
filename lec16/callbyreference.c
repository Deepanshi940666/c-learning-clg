#include<stdio.h>

int sum(int *a, int *b)
{
  *a=20;
  *b=30;
  int sum=*a+*b;
  return sum;
}

int main(){
    int a=5;
    int b=3;
    int data= sum(&a,&b);
    printf("%d\n",data);
}