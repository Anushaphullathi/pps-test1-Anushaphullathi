#include<stdio.h>
int input()
{
  int a;
  printf("enter the value of a\n");
  scanf("%d%d",&a,&b);
  return a;

}
int add(int a,int b, int sum);
{
  int sum
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d=%d\n"a,b,sum);
}
int main()
{
  int p,q,r;
  p=input();
  q=input();
  r=add(p,q);
  output(p,q,r);
  return 0;

}
