#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,ans;
    int pi[200]={1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5,0,2,8,8,4,1,9,7,1,6,9,3,9,9,3,7,5,1,0,5,8,2,0,9,7,4,9,4,4,5,9,2,3,0,7,8,1,6,4,0,6,2,8,6,2,0,8,9,9,8,6,2,8,0,3,4,8,2,5,3,4,2,1,1,7,0,6,7};
    printf("::PI GAME::\n");
    printf("Press any key to start or '0' to exit\n");
    scanf("%d",&ans);
    while(ans!=0)
    {
        i=0;
        printf("Enter the pi digits 3.\t");
    do
    {
        scanf("%d",&j);
    }
    while(j==pi[i++]);
    printf("\nThe next pi digit is %d\n",pi[--i]);
    printf("GAME OVER\n");
    printf("Press 1 restart or 0 to exit\n");
    scanf("%d",&ans);
    }
    return(0);
}
void prin(){
	printf("Hello world again");
}