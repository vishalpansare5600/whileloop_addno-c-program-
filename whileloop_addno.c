#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int num,i, sum=0;
 	printf("Enter the positive number=");
 	scanf("%d",&num);
 	
 	i=0;
 	do{
 		sum=sum+i;
 		i++;
 		
	 }
 	while(i<=num);
 		 printf("\n the first number of %d is %d",num,sum);
	 getch();
 
 
 }
 
