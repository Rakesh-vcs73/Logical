#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the level\n");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                a[i][j]=0;
        }
    }
    a[0][0]=1;
    for(i=1;i<n;i++){
        for(j=0;j<=n;j++){
                if(j==0)
                {
                    a[i][j]=0+a[i-1][j];
                }

                else
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                }
        }
    }
    int sp=n;
    int k;
    for(i=0;i<n;i++){
             for(k=0;k<sp;k++)
                {
                    printf("    ");
                }
                 sp--;
             for(j=0;j<n;j++){
                if(a[i][j]==0)
                {
                    continue;
                }
                else
                {
                    printf("%d       ",a[i][j]);
                }
              }
        printf("\n\n");
    }
    return 0;
}
