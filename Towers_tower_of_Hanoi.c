/* the TOWERS OF HANOI - solved using recursion */
#include<stdio.h>

void transfer(int n, char from, char to, char temp);

main(){
	char temp,from,to;
	int n;
	printf("How many disks?\n");
	scanf("%d",&n);
	transfer(n,'L','R','C');
}

void transfer(int n,char from, char to, char temp)
/* transfer n disks from one pole to another */ 
/* n = number of disks 
from = origin 
to = destination 
temp = temporary storage */
{
	if(n>0){
		transfer(n-1, from,temp,to);
		
		printf("Move disk %d from %c to %c\n", n,from,to);
		
		transfer(n-1, temp,to,from);
	}
	
}
