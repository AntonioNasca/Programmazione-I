/*Descrivere un algoritmo in notazione NLS che prende input una matrice bidimensionale
o una array bidimensionale V di dimesione NxN. 

L'algoritmo dovrà calcolare e stampare la media 
aritmetica dei valori differenza calcolati tra ogni 
valore della diagonale principale e il corrispondente valore della diagonale secondaria.*/

#include <iostream>

using namespace std;

int main(){
	
	int c,r,n;
	float med;


	
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
    
    
    //Trasferire valori diagonale 1
    	int vsd1[c];
    	int i=0,j=0,x=0;
    	while(i<r)
    	{
    	  
			
    		vsd1[x]=v[j][i];
    		
    		x++;
			i++;
			j++;
    	}
    	
   	
	
	
	//Visualizzare vsd1
	
	cout<<"Vettore vsd1: \n";

	for(int i=0;i<r;i++)
	{
	
	  	
        cout<<vsd1[i]<<" ";
	 
	    
	  
    }  
	
	cout<<"\n";
	
 //Trasferire valori diagonale 2
	 j=c-1,i=0, x=0;
	
   	int vsd2[c];
    	
	while(i<r)
	{
	  
	  vsd2[x]=v[j][i];
	  j--;
	  i++;	
	  x++;

		
	}
    
    cout<<"\n";
    
    //Visualizzare vsd1
	
	cout<<"Vettore vsd2: \n";

	for(int i=0;i<r;i++)
	{
	
	  	
        cout<<vsd2[i]<<" ";
	 
	    
	  
    }  
    
    cout<<"\n";
    
    //Calcolo media e differenza dei valori della diagonale
    for(int i=0;i<c;i++)
    {
    	med=vsd1[i]-vsd2[i];
    	
    	med=med/2;
    	
    	cout<<"Media  diagonali dei "<<i<<" valori:"<<med<<"\n\n";
    	med=0;
	}
    
    
    
    
    
    
    
	
	  
	
	
}




