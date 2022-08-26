//print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
   int s,a[100],*p;
   printf("Enter number of values: ");
   scanf("%d",&s);
   printf("Enter %d numbers \n",s);
   for(p=a; p<a+s; p++)
   scanf("%d",p);
   for(p=a+(s-1) ;p>=a ;p--)
   printf("%d ",*p);
   return 0;

}
