/*Descrivere un algoritmo in notazione NLS che prende input una matrice bidimensionale
o una array bidimensionale V di dimesione NxN. 

L'algoritmo dovrà calcolare e stampare la media 
aritmetica dei valori differenza calcolati tra ogni 
valore della diagonale principale e il corrispondente valore della diagonale secondaria.*/

#include <iostream>

using namespace std;

int main(){
	
	int c,r,n,sd1=0,sd2=0,med;

	
	cout<< "Scegliere quante colonne vuoi nella matrice\n";
	cin>>c;
	
	cout<< "Scegliere quante righe vuoi nella matrice\n ";
	cin>>r;
	
	
	//Creazione matrice
	int v [c][r];

	for(int i=0;i<r;i++)
	{
	
	  for(int j=0;j<c;j++)
	  {
	  	cout<<"Numero da inserire nella matrice\n";
	  	cin>>n;
	  	v[j][i]=n;
	  }
	  
    }  
    
    
    
    //Visualizzare matrice


	for(int i=0;i<r;i++)
	{
	
	  for(int j=0;j<c;j++)
	  {
	  	
	  	cout<<v[j][i];
	  }
	    cout<<"\n";
	  
    }  
    
    
    //Calcolo diagonale 1
    
    for(int i=0;i<r;i++)
    {
    	
    	for(int j=0;j<c;j++)
    	{
    		if(j==i)
    		{
    			sd1=sd1+v[j][i];
			}
    		
		}
    	
    	
    	
	}
	
	
	//Calcolo diagonale 2
	int j=c-1,i=0;
	
	while(i<r)
	{
	  sd2=sd2+v[j][i];
	  j--;
	  i++;	

		
	}
    
    
    med=(sd1+sd2)/2;
    
    cout<<"Media  diagonali:"<<med<<"\n\n";
    
    
    
    
	
	  
	
	
}




