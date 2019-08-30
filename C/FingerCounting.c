#include<stdio.h>
#include<stdlib.h>

void main(){
	int a[100][5],i=1,j=1,num,count=1;
	printf("Enter the number : ");
	scanf("%d",&num);
	if(num==1){
		printf("1");
		exit(0);
	}
	do{
		if((i%2) !=0){
			if(j<5){
			a[i][j]=count++;
			j++;
			}
		else if(j==5){
			a[i][j]=count;
			i++;
			a[i][j]=count++;
			j--;
			}

		}
		else {
			if(j>1){
				a[i][j]=count++;
				j--;
			}
			else if(j==1){
				a[i][j]=count;
				i++;
				a[i][j]=count++;
				j++;
			}
		}
	}while(count<num);

if((i%2) !=0){
	printf("%d\n\n",j);
}
else{
	printf("\n%d\n\n",j);
}
}