/*
 ============================================================================
 Name        : tp4ex4(3éme.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int T1[10]={10,20,8,102,56,84,59,23,84};int T2[10]={52,65,87,15,2,9,36,12,46,97};
	int T3[10];
	int i;
	for(i=0;i<=9;i++)
	{
		T3[i]=T1[i];
		T1[i]=T2[i];
		T2[i]=T3[i];
	}
	for(i=0;i<=9;i++)
	{
		printf("le tableau T1 sera %d\n",T1[i]);
	}

}
