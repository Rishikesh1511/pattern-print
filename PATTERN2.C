#include<conio.h>
#include<stdio.h>
 void main()
  {
   int r,c,n,d;
  clrscr();
  scanf("%d",&n);
   for(c=0;c<n;c++)
    {
     for(r=0;r<n;r++)
      {
	 if(r>=c)
	  {
	   printf("*");
	  }
	 else
	  {
	   printf(" ");
	  }
      }
	   printf("\n");
    }
   getch();
  }
