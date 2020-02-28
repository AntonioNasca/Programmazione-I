/*Descrivere un algoritmo in notazione NLS che prende in input un numero N>0 ed un numero M>0. L’algoritmo opera nel seguente modo: 
stampa i primi N numeri pari, a partire da 0. 
stampa i successivi M numeri dispari.
Esempio, per N=5, M=4 lo output sarà:  0 2 4 6 8 9 11 13 15  */

#include <stdio.h>
#include <stdlib.h>

int main(){


	int n,m;
	
	
	printf("Scrivi il numero N:\n");
	scanf("%d",&n);
	
	printf("Scrivi il numero M:\n");
	scanf("%d",&m);
	
	int i=0,p=0;
	
	while(p!=n)
	{
		
		if(i%2==0)
		{
			printf(" %d ",i);
			p++;
			
		}
	i++;
	
	}
	
		int j=i,d=0;
		
	while(d!=m)
	{
		if(j%2==1)
		{
			printf(" %d ",j);
			d++;
		}
		
		j++;
	}
  printf("\n");
  printf("\nCi sono in tutto %d numeri pari",p);
  printf(" e %d numeri dispari\n",d);

}

