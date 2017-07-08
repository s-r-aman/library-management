#include<stdio.h>
#include"functions.h"
int main()
{
   int i,r;
   printf("*****Welcome to library management*****\n ");
   printf("\nenter password\n");
   r = password();
   if(r==1)
      {
       first_page();
      }
}
