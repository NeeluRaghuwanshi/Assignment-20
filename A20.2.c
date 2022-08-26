//swap two char array string using pointers.
#include<stdio.h>
void swap(char**,char**);
int main()
 {
     char *x[20],*y[20];
     printf("Enter two strings\n");
     gets(x);
     gets(y);
     swap(&x,&y);
     printf("strings after swaping are: %s %s",x,y);
     return 0;
 }
 void swap(char**p,char**q)
 {
    char *temp;
    temp=*p;
    *p=*q;
    *q=temp;
 }
