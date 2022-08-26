//calculate the length of the string using a pointer
#include<stdio.h>
int main()
{
  char a[20],*p;
  printf("Enter a string: ");
  gets(a);
  p=a;
  int l=0;
  while(*p!='\0')
  {
    l++;
    p++;
  }
  printf("Length of string is: %d",l);
  return 0;
}
