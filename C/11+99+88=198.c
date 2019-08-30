#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k,x,y,z,count=0;
    for(i=11;i<=99;i++)
     {
         for(j=11;j<=99;j++)
         {
             for(k=11;k<=99;k++)
             {
                 if(i%11==0&&j%11==0&&k%11==0)
                 {
                     x=i%10;
                     y=j%10;
                     z=k%10;
                     if((i+j+k)==((x*100)+(y*10)+(z)))
                     {
                         printf("The numbers are : ");
                         printf("%d,%d,%d",i,j,k);
                         printf("\n%d+%d+%d = %d\n",i,j,k,(i+j+k));
                     }
                 }

             }
         }
     }
}
