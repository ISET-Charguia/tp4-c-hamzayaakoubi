/*
 ============================================================================
 Name        : tp4ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int T[10];
	int i,n,res;
	printf("donner n: ");
	scanf("%d",&n);

	for(i=0;i<=9;i++)
	{
		res=n%2;
		T[i]=res;
		n=n/2;
	}
	for(i=9;i>=0;i--)
	{
		printf("%d",T[i]);

	}
}
