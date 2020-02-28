#include <iostream>
using namespace std;

class Matrice3D{
	
	private:
	
	int a,b,c;
	int valore;
		
//	Come si dichiara una matrice 3D Dinamica??
       
	public: 

		
	//costruttore di default
    
     Matrice3D(int Dimx,int Dimy,int Dimz,int numero)
	  {
         a= Dimx;
         b=Dimy;
         c= Dimz;
         valore=numero;
         
          v[a][b][c];
         
         
         
         //Inizializzazione Matrice
         
         //Profondità matrice
    	for(int i=0;i<=a;i++)
     	{
     		
     		//Righe
     	    cout<<"Dimensione"<<i<<endl;	
     		for(int j=0;j<b;j++)
     		{
     			//Colonne
     			for(int z=0;z<c;z++)
     			{
     			   v[i][j][z]=valore;
     				cout<<v[i][j][z];
     				
     				
     				
				}
				cout<<endl;
			}
		  
     	
	 	}
         
         
         
		  
      }
	
	
	
	//Ritorno valori
	int ritornaA(){
		return a;
		
	}
	
	int ritornaB(){
		return b;
		
	}
	
	int ritornaC(){
		return c;
		
	}
	
	int ritorna_valore(){
		return valore;
		
	}
	
	
	
	
int *** stampa(int a,int b,int c)
	{
		
		 
	    //Profondità matrice
    	for(int i=0;i<a;i++)
     	{
     		
     		//Righe
     		for(int j=0;j<b;j++)
     		{
     			//Colonne
     			for(int z=0;z<c;z++)
     			{
     			   //Matrice3D.??
     				
     				
				}
			}
     	
	 	} 
		
	}

	
	
	
	
};


int main(){

       
      //Prima dimensione è profondità
      //Seconda righe
      //Terza colonne
      
      Matrice3D test (2,3,4,5);
      //test.creazione_matrice(2,3,4,5);
      
      
      
     
      
      
      
   


}



