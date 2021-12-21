#include<stdio.h>
int add (int a,int b);
int main()
{
  int x=10,y=70,z;
  z=add(x,y);
  printf("sum=%d",z);
}
 int add(int a,int b)
  {
  return(a+b);
}