#include <iostream>
#include <iomanip>
#include <stdlib.h>     
#include <string.h>

#define COLUMNS 8
#define ROWS 3

using namespace std; 


bool cerca(string **A, int r,short w){
	
	bool esiste=false;
	int c=COLUMNS;
    string frase[c],metafrase1[c],metafrase2[c],metafrase3[c],frase1[c];
   int i=0;
   while(i<r){
   
   //Prendo la prima frase
   for(int j=0;j<c;j++)
   {
   	  if(A[i][j]!="/0")
   	  {
   	  	 frase[j]=A[i][j];
   	    	 
   	  	 
	  }
	
   	
   }
   
   //Conservo la frase con indici minore di w
   for(int j=0;j<w;j++)
   {
   	   metafrase1[j]=frase[j];
   	  // cout<<"Metafrase1 con posizione:"<<j<<metafrase1[j]<<"\n\n ";
   	   
   	    
   }
   
   cout<<"\n\n";
    //Conservo la frase con indici maggiori di w
   for(int j=w;j<c;j++)
   {
   	   metafrase2[j]=frase[j];
   	    // cout<<"Metafrase2 con posizione:"<<j<<metafrase2[j]<<"\n\n";
   	    
   }
   
   //Sistemo stringa metafrase2
   for(int j=0,x=w;j<c,x<c;j++,x++)
   {
   	    metafrase3[j]=metafrase2[x];
   	  //cout<<"Metafrase3"<<metafrase3[j]<<"\n\n";
   }
   
  
   
   //Controllo se le stringhe(frasi) sono uguali
    int conta=0;
   for(int j=0;j<c;j++){
  
   if(metafrase1[j]==metafrase3[j])
   {  
        conta++;
        if(conta==c){
		
   	   esiste=true;
   	   //cout<<metafrase1<<" e' uguale a"<<metafrase3<<"\n\n";
       }
   }
   
}
   
  
    
    //cout<<"\n\n";
    i++;
   	

      
 }
 
  
  return esiste;

}









int main(){

  short w;
  bool esiste=false;
  
  string input;
  string **A = new string*[ROWS];
  
  //Dichiaro di fare una allocazione dinamica nel vettore bidimensionale A
  for(int j=0; j<ROWS ;j++)
   A[j] = new string[COLUMNS];
  
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
  
  
  cout<<"Inserisci variabile short\n\n";
  cin>>w; 
  
  esiste=cerca(A, ROWS,w); 
  cout<<"\n\n";
  if(esiste==true)
  cout<<"Esiste\n\n";
  else
  cout<<"Non esiste\n\n";
  
}
