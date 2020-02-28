/*Descrivere un algoritmo in notazione NLS che prende in input uno array A, un numero N che rappresenta la dimensione dello array, un numero p. Si assuma che 0 < p < N. L’algoritmo esegue le seguenti operazioni: 
calcola il massimo valore degli elementi dello array A che hanno indice minore o uguale a p. 
calcola il minimo valore degli elemento dello array A con indice maggiore di p. 
calcola e stampa la media aritmetica tra i due valori calcolati in precedenza */


#include <stdio.h>
#include <stdlib.h>
int main(){

int a,b,p,med;

printf("Quanti numeri vuoi inserire nell'array?:");
scanf("%d",&b);

printf("Digita un numero p:");
scanf("%d",&p);



//Inserimento valori interi nel vettore "array"
int array[b];

for(int i=0;i<b;i++)
{
	printf("Inserisci il numero %d nell'array:\n",i);
	scanf("%d",&a);
	array[i]=a;
	
}



//	Calcolo del massimo
int max=0;	
for(int i=0;i<b;i++)
{
	if(i<=p)
	if(max<array[i])
	{
		max=array[i];
	}
	
	
}
printf("Il maggiore e':%d\n",max);


//Calcolo del minimo	
	
int min=array[p+1];	
for(int i=p;i<b;i++)
{
	if(i>p)
	{
	
		if(array[i]<=min)
		{
			min=array[i];
		
		}
    }   
}
	printf("Il minore e':%d\n",min);

	med=(max+min)/2;
	
	printf("La media del massimo e del minimo %d:%d=%d\n",max,min,med);








	
	
}


	
