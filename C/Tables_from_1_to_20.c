#include <stdio.h>
int main()
{
    int i,j,num;
    for(i=1;i<=20;i++)
    {
        printf("Multiplicative table of %d\n",i);
        num=i;
        for(j=1;j<=10;j++)
        {
            printf("%3d\t",num*j);
        }
        printf("\n");
    }
    return(0);
}
