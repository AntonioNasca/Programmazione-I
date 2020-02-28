/*Descrivere un algoritmo in notazione NLS che prende input una matrice 
o una array bidimensionale V di dimesione NxM, un array A
 di dimensione K, ed un numero w<M.

L'algoritmo stampa il valore di verità true se esiste almeno una riga dlla matrice 
V che contiene almeno w elementi maggiori di ogni elemento di A*/

#include <iostream>

using namespace std;

int main(){
	
	int c,r,n,k,w;

	
	cout<< "Scegliere quante colonne vuoi nella matrice\n";
	cin>>c;
	
	cout<< "Scegliere quante righe vuoi nella matrice\n ";
	cin>>r;
	
	cout<< "Scegliere la dimensione del vettore\n ";
	cin>>k;
	
	cout<< "Scegliere quanti elementi controllare\n ";
	cin>>w;
	
	
	

	
if(w<r){
	
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
    
    
		//Creazione Vettore
		int a [k];

		for(int i=0;i<k;i++)
		{
	
	  		cout<<"Numero da inserire nel vettore\n";
	  		cin>>n;
	  		a[i]=n;
		}
	  
   
    
    
	  
     
    
    
    
    	//Visualizzare matrice

  	 cout <<"Matrice:\n";
   
		for(int i=0;i<r;i++)
		{
	
	 	 for(int j=0;j<c;j++)
	 	 {
	  	
	  		cout<<" "<<v[j][i];
	   	 }
	    
	  		cout<<"\n\n";
    	}  
    
    
    	//Visualizzare Vettore

  	 cout <<"Vettore:\n";
   
     	  for(int j=0;j<k;j++)
	 	 {
	  	
	  		cout<<" "<<a[j];
	 	 }
	 	 
	 	 cout<<"\n";
	 	 
	 	 //Controllo elementi maggiori nelle  righe
	 	 
	 	
		    int max,m,x;
	 	 
	 	 	for(int i=0;i<r;i++)
			  {
			  	max=0;
			  	
			  	for(int j=0;j<c;j++)
			  	{
			  	    x=0,m=0;
					
				  
				  	while(x<w)
				  	
				  	{
					  
				  		if(v[j][i]>a[x])
				  		{
				  			
				  			m++;
				  			
				  			
				  	   	
						}
						
						if(m>=w)
	 	 					{
	 	 						
								  max++;	
	 	 	   			
	 	 	   			
							}
						x++;
				    }
						
				}
				
						
					if(max>=w)
	 	 			{
	 	 			
	 	 			    cout<<"TRUE!\n";	
	 	 	   			
	 	 	   			
					}
			  	
			  }
	 	 	
	 	 	
	 	 		
	 	 	
	 	 	
	 	 	
	 	 	
	 	 	
	
	
	 	 
	 	 
	 	 
	}
 
 
 			else
 		{
 	
 				cout<<"Il numero di elementi deve essere minore del numero di righe\n";
 		}
    
    
    
    
    
    
    
    
}	
	
	
    
    
    
    
		  
	
	





