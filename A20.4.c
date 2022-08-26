//demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
  int x=5,*p,**q,***r;
  p=&x;
  q=&p;
  r=&q;
  printf("%d %d %d %d\n",x,*p,**q,***r);
  printf("%d %d %d %d %d %d %d",&p,&x,*q,**r,&q,&r);
  return 0;
}
