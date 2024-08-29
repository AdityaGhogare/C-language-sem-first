*#include<stdio.h>
int main()
{
    int prime(int);
    int i=1,n=1,a;
   
    while(i<=20)
    {   a=prime(n);
        if(a!=0)
        {
          printf("%d ",a);
          i++;
        }
        n++;
    }
    
}
int prime(int n)
 {
    int f=0,i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {f=1;break;}
    }
    if(f==0)
     return n;
     else return 0;
 }*/
