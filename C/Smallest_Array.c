/*
Forming smallest array with given constraints
Given three integers x, y and z (can be negative). The task is to find the length of the smallest array that can be made such that absolute difference between adjacent elements is less than or equal to 1, the first element of the array is x, having one integer y and last element z.

Examples:

Input : x = 5, y = 7, z = 11
Output : 7
The smallest starts with 5, having 7, ends
with 11 and having absolute difference 1
is { 5, 6, 7, 8, 9, 10, 11 }.

Input : x = 3, y = 1, z = 2
Output : 4
The array would become { 3, 2, 1, 2 }
*/


//My solution: 
//Not Fully correct check 2,2,2 and -2,1,-1
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int x,y,z;
	int count=0;
	printf("\nEnter the values of x,y,z\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("\nArray is : |");
	if(y>=x){
	while(y>=x){
		printf(" %d |",x);
		x++;
		count++;
	}
	printf(" %d |",x);
	x++;
	count++;
	
  }
  else{
  	while(x>y){
  		printf(" %d |",x);
		x--;
		count++;
	}
	
	
  }

if(z>=y){
	while(z>=x){
		printf(" %d |",x);
		x++;
		count++;
	}
	x++;
	
  }
  else{
  	while(x>=z){
  		printf(" %d |",x);
		x--;
		count++;
	}

	
  }


printf(" \n\nThus Count is : %d",count);
}



/*Internet solution
In JAVA

import java.io.*; 

class GFG { 
	
	// Return the size of smallest 
	// array with given constraint. 
	static int minimumLength(int x, 
					int y, int z) 
	{ 
		return 1 + Math.abs(x - y) 
				+ Math.abs(y - z); 
	} 
	
	// Drivers code 

	public static void main(String[] args) 
	{ 
		int x = 3, y = 1, z = 2; 
		System.out.println( 
			minimumLength(x, y, z)); 
	} 
} 
*/
