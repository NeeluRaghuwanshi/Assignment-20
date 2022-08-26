//count the number of vowels and consonants in a string using a
//pointer.
#include<stdio.h>
int main()
{
  char s[20],*p;
  int v=0,c=0;
  p=s;
  printf("enter a string: ");
  gets(s);
  for(p;*p;p++)
   {
      if((*p>='a' && *p<='z') || (*p>='A' && *p<='z'))
      {
         if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' || *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
            v++;
         else
            c++;
      }
   }
   printf("Total vowels= %d \nTotal consonants= %d",v,c);
   return 0;

}
