#include <iostream>
#include <iomanip>
#include <stdlib.h>     
#include <time.h>

#define COLUMNS 4
#define ROWS 4

using namespace std; 

/* Per un array bidimensionale valgono 
  le stesse considerazioni. 
  Le celle dello array costituiscono un unico 
  blocco di memoria grande ROWSxCOLUMNSxsizoef(int). 
*/ 
bool controllsomm(int**A, int r,int n){
	
	int s=0;
	bool divisibile=false;
   int 	riga=r-1;
	

	//Diagonale sottostante alla diagonale secondar
	for(int i=1;i<r;i++ )
	{
		
		s+=A[riga][i];
		cout<<"RIGA: "<<riga<<"Colonna: "<<i<<"Valore: "<<A[riga][i]<<endl;
		riga--;
		 
	    
	    
	
		
    }   
	
		cout<<"Somma:"<<s<<endl;
	
	if(s%n==0)
	{
		divisibile=true;
	}
	
   return divisibile;

}



int main(){

 bool indice=false;
 
  int n;
 

   
   int **A=new int*[ROWS]; 
   
   srand(time(NULL));
   
   //Dichiaro di fare una allocazione dinamica dellla matrice A
   for(int j=0; j<ROWS ;j++)
   A[j] = new int[COLUMNS];
   
   //Inizializzo
   for(int i=0;i<ROWS;i++)
   {
   	  for(int j=0;j<ROWS;j++)
   	  {
	     int casuale=rand()%20+1;
		  A[i][j]=casuale;	 
	  }
   	 
   }
   
   //Visualizzo la matrice
   for(int i=0;i<ROWS;i++)
   {
   	  for(int j=0;j<ROWS;j++)
   	  {
	     int casuale=rand()%20+1;
		 cout<< A[i][j]<<" ";	 
	  }
   	 cout<<endl;
   }
   
   
   cout<<"Inserisci N=  ";
   cin>>n;
  
  indice=controllsomm(A, ROWS,n); 
  if(indice==true)
  cout<<"E' divisibile\n\n";
  
  else
  cout<<"non E' divisibile\n\n";
}
