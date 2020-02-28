/*Descrivere un algoritmo in notazione NLS che prende input una matrice bidimensionale
o una array bidimensionale V di dimesione NxM.. 

L'algoritmo dovrà calcolare e stampare le medie 
aritmetiche di tutti valori minori oguali a p 
per le solo righe di V che hanno indice dispari*/

#include <iostream>

using namespace std;

int main(){
	
	int c,r,n,p;

	
	cout<< "Scegliere quante colonne vuoi nella matrice\n";
	cin>>c;
	
	cout<< "Scegliere quante righe vuoi nella matrice\n ";
	cin>>r;
	
	cout<< "Scegliere il valore di p\n ";
	cin>>p;
	

	
	
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

   cout <<"Matrice:\n";
   
	for(int i=0;i<r;i++)
	{
	
	  for(int j=0;j<c;j++)
	  {
	  	
	  	cout<<" "<<v[j][i];
	  }
	    
	  cout<<"\n\n";
    }  
    
    
    
    
    
    
    //Calcolo medie sui indici dispari
    int i=0,cd,s=0,med=0;
    while(i!=r)
   {

    	
    
    
      //Controlo indice
   	 if(i%3==0&&i!=0||i==1)
     {
     	
     	
   	 	for(int j=0;j<c;j++)
    	{
    	        //Controllo valori se sono compresi nel  valore p
    			if(v[j][i]<=p)
    			{
			        
    	     		s=s+v[j][i];
    	     		cd++;
    	   		}
   		}
   		
   	   
   	   	
   	    
   	    
		med=s/cd;
			   	
   		cout<<"La media dei numeri compresi nella riga "<<i<<" e':"<<med<<"\n\n";
   		
   		s=0;
   		cd=0;
   	 }
    
    	 
		 i++;
		 
    
    }
    
    
}	
	
	
    
    
    
    
		  
	
	





