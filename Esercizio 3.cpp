//Descrivere un algoritmo in notazione NLS che prende in input un array A monodimensionale di N elementi. L’algoritmo calcola e stampa il massimo ed il minimo valore tra tutti gli elementi di A.


#include <stdio.h>
#include <stdlib.h>
int main(){

int a,b;

printf("Quanti numeri vuoi inserire nell'array?:");
scanf("%d",&b);

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
	
	if(max<array[i])
	{
		max=array[i];
	}
	
	
}
printf("Il maggiore e':%d\n",max);


//Calcolo del minimo	
	
int min=array[0];	
for(int i=0;i<b;i++)
{
	
	if(array[i]<=min)
	{
		min=array[i];
		
	}
	
	
}
printf("Il minore e':%d",min);








	
	
}


	
	
	
	
	

	










