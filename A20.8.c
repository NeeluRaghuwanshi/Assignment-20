//compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main()
{
  int a[] = {1,2,3,4,5,6,7},*p;
  int sum=0;
  for(p=a; *p ;p++)
  {
    sum += *p;
  }
  printf("Sum is %d",sum);
  return 0;
}
