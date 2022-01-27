#include<stdio.h>
#include<stdlib.h>
int input_array_size()
{
   int a;
  printf("enter the size of array\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n,int a[n])
{
 sum_n_arrays(n,a[n]);
 
}

int sum_n_arrays(int n,int a[n])
{
  int i;
  int sum=0;
for(i=0;i<=n;i++)
{
  sum=sum+1;
}
out_put(n,a[n],sum);
return 0;
}
void out_put(int n,int a[n],int sum)
{
  int sumout;
  sumout=sum_n_arrays(n,a[n],sum);
  printf(sumout);
// int i;
//for(i=0;i<=n;i++)
//{
//  printf("%d",a[i]);
//}
//printf("%d",sum);
}
int main()
{
  int p,r,i,a[20];
  p=input_array_size();
  for(i=0;i<p;i++)
  {
    scanf("%d",a[i]);
    input_array(p,a[i]);
  }
  out_put
  return 0;
}