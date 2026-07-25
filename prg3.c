#include<stdio.h>
int main()
{
    int a[50],min,max,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" the array elements are:");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
        printf("\n");
        min = a[0];
        max = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        {
        min=a[i];
        }
    }
        if(a[i]>max)
        {
        max=a[i];
        }
      printf("minimum element is: %d\n",min);
      printf("maximum element is: %d\n",max);
    return 0;
}   
