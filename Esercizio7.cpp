/*Descrivere un algoritmo in notazione NLS che prende in input un array A monodimensionale di dimensione N. L’algoritmo costruisce un nuovo array B di dimensione N in cui inserire gli elementi dello array A in ordine inverso. 
Esempio, se  A= [1 2 5 3 4 10 5 ], l’algoritmo darà in  output un array B= [5 10 4 3 5 2 1]*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	
	int dim,n;
	
	//Richiesta inserimneto valori 
	printf("Dimensione del vettore?:");
	scanf("%d",&dim);
	 
	int v[dim],b[dim];
	
	//Inserimento vettore
	for(int i=0;i<dim;i++)
	{
	 printf("Valore da inserire nel vettore posizione %d?:\n",i);
	 scanf("%d",&n);
	 v[i]=n;
		
		
	}
	
		printf("Visualizzo il vettore:\n");
	//Visualizzazione vettore
	for(int i=0;i<dim;i++)
	{
	 
	   printf("%d",v[i]);
		
		
	}
	    printf("\n");
		
		
		
	
	printf("Specchio vettore:\n");
	//Speccho vettore
	
	
		int j=0,i=dim-1;
	       while(i>=0)
	       {
		     
	   	     b[j]=v[i];
	   	     i--;
	   	     j++;
	   		
		   }
		
		
	
	
	//Visualizzo Speccho vettore 
	for(int i=0;i<dim;i++)
	{
	 
	   printf(" %d ",b[i]);
		
		
	}
	
	
	
}
