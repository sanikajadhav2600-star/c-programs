//bubble sort on string
#include<stdio.h>
#include<string.h>

 void main()
 {
  char a[10][20],temp[20];
  int n,i,j;
  clrscr();
  printf("Enter the size:");
  scanf("%d",&n);

 printf("Enter the string for sort:");
  for(i=0; i<n; i++)
   scanf("%s",a[i]);

    for(i=0; i<n-1; i++)
    {
      for(j=0; j<n-i-1; j++)
       {
	 if(strcmp(a[j],a[j+1]) > 0)
	  {
	     strcpy(temp,a[j]);
	     strcpy(a[j],a[j+1]);
	     strcpy(a[j+1],temp);
	    }
	   }
	 }

	printf("sorted string:\n");
	for (i=0; i<n; i++)

	 printf("%s\n",a[i]);

       getch();
      }
