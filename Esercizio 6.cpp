/*Descrivere un algoritmo in notazione NLS che prende in input un array V bidimensionale di dimensione N x N. 
L’algoritmo costruisce un nuovo array W di dimensione N che contiene gli elementi della diagonale principale di V. 
*/


#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	



int c,r;
int f=c;
int g=c;



printf("Quante colonne ha la matrice?:");
scanf("%d",&c);
printf("Quante righe ha la matrice?:");
scanf("%d",&r);



int array[c][r],array2[c],array3[g];



//Inserimento valori interi nella matrice "array"


for(int i=0;i<r;i++)
{
	
	for(int j=0;j<c;j++)
	{
	
		
		scanf("%d",&array[i][j]);
		
	}
}

//Visualizzazione valori interi nella matrice "array"

for(int i=0;i<r;i++)
{
	
	for(int j=0;j<c;j++)
	{
	
		printf(" %d ",array[i][j]);
	
		
	}
		//Alla fine di ogni clonna vado a capo
		printf("\n");
}



//Transazione valori interi della diagonale 1 della matrice "array2"

printf("Stampo array diagonale matrice:\n");
for(int i=0;i<r;i++)
{
	
	for(int j=0;j<c;j++)
       
		  	{
		  		if(i==j){
				  
		  		array2[f]=array[i][j];
				printf(" %d\n",array2[f]);
				f++;
		  	}
			  }
			
			
		  
		
		
}



//Transazione valori interi della diagonale 2 della matrice "array2"

printf("Stampo array diagonale 2  matrice:\n");
for(int i=0;i<r;i++)
{
	
	for(int j=0;j<c;j++)
       
		  	{
		  		if(j>i)
		  		{
		  		   array3[g]=array[i][j];
				   printf("%d\n",array3[g]);
				   g++;
				  
			    }
		  	}

}


























			
			
		  
		
		
}








	
