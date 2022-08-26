//swap two variables using pointers.
#include<stdio.h>
void swap(int*,int*);
int main()
 {
     int x,y;
     printf("Enter two values\n");
     scanf("%d %d",&x,&y);
     swap(&x,&y);
     printf("values after swaping are:%d %d",x,y);
     return 0;
 }
 void swap(int*p,int*q)
 {
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
 }
