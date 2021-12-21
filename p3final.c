#include<stdio.h>
void change(int x)
{
  printf("before change =%d",x);
  x+=100;
  printf("after change =%d",x);
}
int main()
{
  int num=200;
  printf("before callig=%d",num);
  change(num);
  printf("after calling =%d",num);
  return 0;
}