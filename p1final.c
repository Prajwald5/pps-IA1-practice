#include<stdio.h>
int input()
{
  int i;
  printf("enter a number\n");
  scanf("%d",&i);
  return i;
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
  
}
void output(int a,int b,int c)
{
  printf("%d=%d+%d",c,a,b);
}
int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}