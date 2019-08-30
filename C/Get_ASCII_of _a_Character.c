#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    int ans,val;
    do
    {
        printf("Enter the character\n");
        scanf("%c",&ch);
        val=ch;
        printf("The Ascii Value is : %d",val);
        printf("\nEnter another character or 0 to exit\n");
        scanf("%d",&ans);
    }
    while(ans!=0);
    return(0);
}
