#include <iostream>
#include <time.h>
#include <stdlib.h> 

#define R 12

using namespace std;

int conta(string A[])
{
   int ripetizioni=0, max=0, indice=0;
   
   //Controllo lunghezza stringa e conservo quella piu' lunga
   
     for (int i=0;i<R;i++)
	 { 
	    int lunghezza=A[i].length();
		
		if(max<lunghezza)
		{
			max=lunghezza;
			indice=i;
			 
		}
		    	
     }
	 
	 for(int i=0;i<R;i++)
	 {
	 	
	 	 if(A[indice]==A[i])
	 	 {
	 	    ripetizioni++;	
	 	 }
	 	
	 	
	 }	
		
  return ripetizioni;

}


int main()
{

 int totripetizioni;
  //Un vettore A allocato staticamente
  string A[R]={"co?me?tichiami","ci??ao","c?o?meva","com?e?va","co?me?tichiami","puo??essere","?c?iao","?c?iao","?c?iao","co?me?tichiami","co?me?tichiami","co?me?tichiami"};
 


/*
  cout<<"Vettore"<<"\n\n";
  //Visualizzo valori del Vettore A
  for(int i=0; i<R; i++)
  {
      cout<<A[i];
       
  }
*/

    //Chiamo il metodo
    totripetizioni= conta(A);
    
     cout<<"\n\n";
    cout<<"Ripetizioni="<<totripetizioni<<"\n\n";

     
     
     

}
