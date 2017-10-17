/*
 ============================================================================
 Name        : tp4ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int T[10];int TP[10];int TN[10];
	int i,ne,po;
	ne=0;po=0;
	for(i=0;i<=9;i++)
	{
		printf("donner une valeur \n");
				scanf("%d",&T[i]);
				if(T[i]<0)
				{

					TN[ne]=T[i];
					ne++;
				}else
				{
					TP[po]=T[i];
					po++;
				}
	}

	for(ne=0;ne<=9;ne++)
	{
		printf("négatif %d\n",TN[ne]);

	}
	for(po=0;po<=9;po++)
		{
			printf("positive %d ",TP[po]);

		}

}



