//find the maximum number between two numbers using a pointer
#include<stdio.h>
int main()
{
  int x,y,*p,*q;
  p=&x;
  q=&y;
  printf("Enter two numbers: ");
  scanf("%d %d",p,q);
  if(*p>*q)
  {
      printf("%d is greatest",*p);
  }
  else
    printf("%d is greatest",*q);
  return 0;

}
