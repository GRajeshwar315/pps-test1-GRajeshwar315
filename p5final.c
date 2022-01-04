#include<stdio.h>
void input(int *a , int*b, int*c)
{
  printf("enter two values\n");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c, int *large)
{
  if(a>b&&a>c)
  {
    *large=a;
  }
  else if(b>c&&b>a)
  {
*large=b;
  }
  else 
  {
    *large=c;
  }
}
void output(int a,int b,int c,int large)
{
  printf("large value %d",large);

}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp(a,b,c,&large);
  output(a,b,c,large);
  return 0;
}