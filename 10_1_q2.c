/*
Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
Input:
Enter any number: 15

Output:
The given number is divisible by both 3 & 5.

------------------------------------------

For example,
Input:
Enter any number: 10

Output:
The given number is not divisible by both 3 & 5.
*/

#include<stdio.h>

void division(){
	int a;
	printf("Enter any number : ");
	scanf("%d",&a);
	
	(a%3==0 || a%5==0)?printf("your number is divisible..")
					  :printf("your number is not divisible..");
}

void main(){
	division();
}
