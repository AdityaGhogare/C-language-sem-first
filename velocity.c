#include<stdio.h>
int main()
{
    float u,v,s,a,t;
    printf("enter initial velocity");
    scanf("%f",&u);
     printf("enter acceleration");
    scanf("%f",&a);
     printf("enter time");
    scanf("%f",&t);
    v=u+a*t;
    s=u+a*t*t;
    printf("final velocity is =%f\n",v);
    printf("distance travelled is=%f\n",s);
}