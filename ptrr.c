#include<stdio.h>
void  jump(int i,int *j)
{
    i=i*i;*j=*j* *j;
}
int main()
{
    int i=-3,j=-7;
    jump(i,&j);
    printf("|n i=%d,j=%d",i,j);
}
 
 #include<stdio.h>
int main()
{
    int *a[5],i,n=5,s=0;
    printf("enter no:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        s=(*(a+i))+s;
    }
    printf("Sum=%d",s);
}