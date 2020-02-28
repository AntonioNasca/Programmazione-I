/*Descrivere un algoritmo in notazione NLS che prende in input un array A di N elementi e due numeri a e b (si assuma anche che a < b). 
L’algoritmo stampa il numero di elementi dello array A[i] tali che a<=A[i]<=b.
*/


#include <stdio.h>
#include <stdlib.h>
int main(){

int n,dim,a,b;

printf("Quanti numeri vuoi inserire nell'array?:");
scanf("%d",&dim);

printf("Digita un numero a:");
scanf("%d",&a);

printf("Digita un numero b:");
scanf("%d",&b);



//Inserimento valori interi nel vettore "array"
int array[dim];

for(int i=0;i<dim;i++)
{
	printf("Inserisci il numero %d nell'array:\n",i);
	scanf("%d",&n);
	array[i]=n;
	
}

for(int i=0;i<dim;i++)
{
	
	if(i>=a&&i<=b)
	{
		
		printf(" %d ",array[i]);
	}
	
	
}






	
	





	
	
}


	
