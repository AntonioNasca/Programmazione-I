#include <iostream>
#include <iomanip>
#include <stdlib.h>     
#include <string.h>
#include <ctime>


int ROWS,COLUMNS;
using namespace std; 


string* cerca( string **A, int r){

   //string *A=new string*[r];
     
     srand(time(NULL));
     
    
     
     int c=COLUMNS; 
     
    string parole[]={"j","k","x","w","y"};
     
     //Controllo matrice
     for(int i=0;i<r;i++)
     {
     	for(int j=0;j<c;j++)
     	{
     			int c=0;
     		for(int x=0;x<5;x++)
     		{
     		
			        
     				if(A[i][j]==parole[x])
     		       {
     		       	  c++;
     		       	 cout<<"E' corretta: "<<A[i][j]<<"\n\n";
     		       	  cout<<"La c vale:"<<c<<"\n\n";
					}
					
					
     	    	
     	    	
     	   }
     	   
     	    if(c==0){
			 
			// cout<<"Non e' corretta"<<A[i][j]<<"\n\n";
				 int lettera=rand()%5+1;
     		    if(lettera==1)
				 {
				 	A[i][j]="j";
				 }
				 
				 if(lettera==2)
				 {
				 	A[i][j]="k";
				 }	
				 
				 if(lettera==3)
				 {
				 	A[i][j]="x";
				 }	
				 
				 if(lettera==4)
				 {
				 	A[i][j]="w";
				 }
				 
				 if(lettera==5)
				 {
				 	A[i][j]="y";
				 }
			 	 
	     	}
		}
     		
		 
     	
	 }
	 
	 //Visualizza vettore bidimensionale A
  cout<<"Valore matrice:\n\n";
  for(int i=0;i<r;i++)
  {
  	for(int j=0;j<c;j++)
  	{
  	    
  	    cout<<A[i][j];
  	   
	}
  	cout<<"\n\n";
  }
	 
	 
	 
	 
	 return *A;
     
   
	  
 

}









int main(){

   bool esiste=false;
  
  
  cout<<"Quante colonne:\n";
  cin>>COLUMNS;
  
  cout<<"Quante righe:\n";
  cin>>ROWS;
  
  string input;
  string **A = new  string*[ROWS];
  
  
  //Dichiaro di fare una allocazione dinamica nel vettore bidimensionale A
  for(int j=0; j<ROWS ;j++)
   A[j] = new  string[COLUMNS];
  
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
  
  cerca(A,ROWS);
   
 

  
  
}
