//Descrivere un algoritmo in notazione NLS che prende in input tre numeri X, Y, Z. L’algoritmo deve calcolare e stampare il minore dei tre numeri. 


#include <stdio.h>
#include <stdlib.h>
int main(){

int a,b,c;

printf("Scrive il primo numero:\n");
scanf("%d",&a);

printf("Scrive il secondo numero:\n");
scanf("%d",&b);

printf("Scrive il terzo numero:\n");
scanf("%d",&c);


if(a<b&&a<c)
	{
	printf("Il numero minore e': %d\n",a);
	
	
	}

if(b<c&&b<a) 
	{
		printf("Il numero minore e': %d\n",b);
	}
	
	if(c<a&&c<b)   
	{
		
		printf("Il numero minore e': %d\n",c);
	}





}

