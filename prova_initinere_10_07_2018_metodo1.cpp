#include <iostream>
#include <iomanip>
#include <stdlib.h>     
#include <string.h>



using namespace std; 


bool cerca(char **A, int r){


     char diagonale[r]; 
	 int uguale=0;
     bool esiste=false;
     
     //Controllo matrice
     for(int i=0;i<r;i++)
     {
     	
     	for(int j=0;j<r;j++)
     {
     	
     	if(i==j)
     	{
     		for(int x=0;x<r;x++)
     		{
     			diagonale[x]=A[i][j];
     			//cout<<"Diagonale:"<<diagonale[x]<<"\n\n";
			 }
     		
		 }
     	
	 }

     	
     	
     	
	 }


   int i=0;
   while(i<r){
   	
   	
   	for(int j=0;j<r;j++)
   	{
   		if(A[i][j]==diagonale[i])
   		{ 
   		   uguale++;
	    }
	    
	    if(uguale==r)
	    {
	    	esiste=true;
		}
   		
	   }
   	i++;
   	
   	
   }

return esiste;
 
 

}









int main(){

   bool esiste=false;
  int ROWS,COLUMNS;
  
  cout<<"Quante colonne:\n";
  cin>>COLUMNS;
  
  cout<<"Quante righe:\n";
  cin>>ROWS;
  
  char input;
  char **A = new char*[ROWS];
  
  //Dichiaro di fare una allocazione dinamica nel vettore bidimensionale A
  for(int j=0; j<ROWS ;j++)
   A[j] = new char[COLUMNS];
  
   //Inizializzazione vettore bidimensionale A
  for(int i=0; i<ROWS; i++)
    for(int j=0; j<COLUMNS; j++)
    {
	   cout<<"Inserisci frase\n\n";
	   cin>>input;
	   
	   
      A[i][j] = input;
      cout<<"Hai inserito nella riga:"<<i<<" e nella colonna: "<<j<<" la parola:"<<input<<"\n\n";
        
  
  
    }
  
  
  //Visualizza vettore bidimensionale A
  cout<<"Valore matrice:\n\n";
  for(int i=0;i<ROWS;i++)
  {
  	for(int j=0;j<COLUMNS;j++)
  	{
  	    
  	    cout<<A[i][j];
  	   
	}
  	cout<<"\n\n";
  }
  
  
   
  
  esiste=cerca(A, ROWS); 
  cout<<"\n\n";
  if(esiste==true)
  cout<<"Esiste\n\n";
  else
  cout<<"Non esiste\n\n";
  
}
