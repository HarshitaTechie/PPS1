#include<stdio.h>
int main();
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int input()
{
  int a;
  printf("Enter the number you want to add \n");
  scanf("\n %d",&a);
  return a;
}

int add(int a, int b)
{
   return a+b;
}

void output( int a , int b, int sum)
{
  printf("Sum of %d and %d is %d \n",a,b,sum);
}

int main()
{
  int a=input();
  int b=input();
  int sum=0;
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}
