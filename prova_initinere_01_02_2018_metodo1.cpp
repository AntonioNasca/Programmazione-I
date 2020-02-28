#include <iostream>
#include <iomanip>
#include <stdlib.h>     
#include <time.h>

#define COLUMNS 5
#define ROWS 5

using namespace std; 

/* Per un array bidimensionale valgono 
  le stesse considerazioni. 
  Le celle dello array costituiscono un unico 
  blocco di memoria grande ROWSxCOLUMNSxsizoef(int). 
*/ 
int cercalibri(bool  v[][COLUMNS], int r){
	
	int nl=0;
	
	int p=r/2;
	
	srand (time(NULL));

  /* Genero un numero casuale da 1 a 4 
  per simulare i movimenti del santone.*/ 
  int direzione = rand() % 4 + 1;
  
   cout<<"Direzione="<<direzione<<"\n\n";
  if(direzione==1)
  {
  	 
  	 for(int i=p;i>=0;i--)
  	 {
  	 //	Direzione NORD
  	 	if(v[i][p]==1)
  	 	{  
  	 	   nl++;
	    }
  	 	
  	 	
  	 	
	 }
  	
  	
  }
  
  if(direzione==2)
  {
  	 for(int i=p;i<COLUMNS;i++)
  	 {
  	 	//	Direzione EST
  	 	if(v[p][i]==1)
  	 	{  
  	 	   nl++;
	    }
  	 	
  	 	
  	 	
	 }
  	
  	
  }
  
  if(direzione==3)
  {
  	 for(int i=p;i<ROWS;i++)
  	 {
  	 	//	Direzione SUD
  	 	if(v[p][i]==1)
  	 	{  
  	 	   nl++;
	    }
  	 	
  	 	
  	 	
	 }
  	
  	
  }
  
  
  if(direzione==4)
  {
  	 for(int i=p;i!=0;i--)
  	 {
  	 	//	Direzione OVEST
  	 	if(v[p][i]==1)
  	 	{  
  	 	   nl++;
	    }
  	 	
  	 	
  	 	
	 }
  	
  	
  }
  
  
  return nl;

}


/*RICORDA CHE IL MAIN GUARDALO SOLO PER CAPIRE COME SI DICHIARANO I VETTORI
E LE MATRICI PERCHè DOBBIAMO SOLO SCRIVERE I METODI*/
int main(){

 int libritrovati=0;
 //Sto inizalizzando una matrice statica di bool
 bool v[ROWS][COLUMNS] = {/* 1st row */ false,false,true,true,true, /*2nd row*/ false,true,false,false,false, /*3th row*/false,true,false,true,true, /*4tyh row*/ true,false,true,false,false, /*5th row*/ true,false,true,false,true};  // 5 x5

  libritrovati=cercalibri(v, ROWS); 
  cout<<"Libri trovati="<<libritrovati<<"\n\n";
}
