#include<stdio.h>
int main(void)
{
  int a,b,tot;
  printf("Please enter two numbers you want to add \n");
  printf("Number 1: ");
  scanf("%d",&a);
  printf("Number 2: ");
  scanf("%d",&b);
  tot=a+b;
  printf("The sum of %d and %d is %d .\n",a,b,tot);
  return 0;
}
