/*
 ============================================================================
 Name        : tp4ex5.c
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
	int x,y,choix,i,min,p;

	for(i=0;i<=9;i++)
	{
		printf("donner une  case de tableau :");
		scanf("%d",&T[i]);
	}

printf("donner votre choix ");
scanf("%d",&choix);
min=T[0];
switch (choix)
{
case 1 :{
	for(i=1;i<=9;i++)
	{
		if(T[i]<min)
		{
			min=T[i];
		}

	}
	printf("le min %d",min);

case 2 :{
	printf("donner x");
	scanf("%d",&x);
	printf("donner y");
		scanf("%d",&y);
		for(i=0;i<=9;i++)
		{
			if(T[i]==x)
			{
				T[i]=y;
			}
		}
		for(i=0;i<=9;i++)
		{
			printf("le tableau sera %d\t",T[i]);
		}





}
}
}
}







