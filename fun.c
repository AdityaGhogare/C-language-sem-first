#include<stdio.h>
 void accept()
   {
    int rn;
    char name[50], div;
    printf("\nEnter Roll no:");
    scanf("%d",&rn);
     printf("\nEnter Name:");
    scanf("%s",&name);
    printf("\nEnter Division:");
    scanf("%c",&div);
   }

   void display()
   {
     int rn;
     char name[50],div;
    printf("\nRoll no:%d",rn);
    printf("\nDivision:%c",div);
    printf("\nName:%s",name);
   }
int main()
{
    void accept();
    void display();
    
}