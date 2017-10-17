/*
 ============================================================================
 Name        : tp4ex4.c
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
int i,aux;
aux=0;
for(i=0;i<=9;i++)
{
	aux=T1[i];
	T1[i]=T2[i];
	T2[i]=aux;

}
for(i=0;i<=9;i++)
{
	printf("le tableau T1 sera %d \n\t",T1[i]);
	printf("le tableau T2 sera %d \n",T2[i]);
}


}
