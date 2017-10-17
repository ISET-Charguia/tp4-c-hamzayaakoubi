/*
 ============================================================================
 Name        : tp4ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int T[10];
	int i,s;
	double moy;
	s=0;
	for(i=0;i<=9;i++)
	{
		printf("donner une valeur ");
		scanf("%d",&T[i]);

		s=s+T[i];
	}
	moy=s/10;
	printf("la moyenne de ce tableau est =%.2f",moy);
}
