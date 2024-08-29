#include<stdio.h>
int main()
{
    __int16 *a[5],i,min=0;
    printf("enter no=");
    for(i=0;i<5;i++)
      scanf("%d",a+i);
      min=a[0];
    for(i=0;i<5;i++)
    {
        if((*a+i)<min)
       min=(*(a+i));
    }
    printf("Min=%d",min);
}