//function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *,int);
int main()
{
    int a[]={8,87,49,1,30,7,3,8,9,2};
    sort(a,10);
    for(int i=0;i<10;i++)
    printf(" %d ",a[i]);
    return 0;
}
void sort(int *p,int size)
{
   int i,j,t;
   for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
      {
        if(p[j]>p[i])
        {
          t=p[i];
          p[i]=p[j];
          p[j]=t;
        }
      }
    }
}
