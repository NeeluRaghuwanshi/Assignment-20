//print string in reverse order.
#include<stdio.h>
int main()
{
   char a[20],*p;
   int l=0;
   printf("Enter a sting \n",p);
   scanf("%s",a);
   for(p=a;*p;p++)
     l++;
   for(p=a+(l-1);p>=a;p--)
   printf("%c",*p);
   return 0;

}
