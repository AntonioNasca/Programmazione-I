#include <iostream>
#include <time.h>
#include <stdlib.h> 

#define Riga 5
#define Colonna 5
#define N 7
using namespace std;
int contaelementi=0; //Lo utilizzo solo per visualizzare il vettore C nel
//main, correttamente.
int *  calcola(int A[][Colonna],int r,int b[])
{
	int *c=new int[N];
	int x=0,z=0;
	bool entra=false;
	while(x<Riga)
	{
		//Vettore B
		for(int i=0;i<N;i++)
			{
				
				//Matrice A
			   for(int j=0;j<Colonna;j++)
			   {
			   	int conta=0;
			   	//Controllo valori
			   	    if(A[x][j]==b[i])
					{

 					   
 						for(int f=0;f<N;f++)
						{

                            
							if(c[f]!=b[i])
							{
							  
							  //Conta se effettivamente questi numeri sono diversi nel vettore
							  //Quindi dovranno essere diversi N volte.
                                 conta++;
						
								
								
								if(conta==N)
								{
								 //	 cout<<"Ho inserito"  <<b[i]<<"\n\n";
									 	c[z]=b[i];
										z++;
										contaelementi++;
								}
							  
							
								
							}
						

						}
					}
			   }
			}
			x++;
	}

	 
		
		return c;


}


int main()
{

  //una matrice A allocata staticamente
  int A[Riga][Colonna];
  int B[N];

   srand(time(NULL));


  //Inserisco valori nella matrice A in modo casuale
  for(int i=0; i<Riga; i++)
  {


      for(int j=0;j< Colonna;j++)
      {
      	 int casuale=rand()%20+1;
      	  A[i][j]=casuale;



      }

  }


  //Inserisco valori nel vettore b in modo casuale
  for(int i=0; i<N; i++)
  {
        B[i]=rand()%10+1;

  }

  cout<<"Matrice"<<"\n\n";
  //Visualizzo valori della matrice A
  for(int i=0; i<Riga; i++)
  {
      for(int j=0;j< Colonna;j++)
      {
      	  cout<<A[i][j]<<" ";
      }
        cout<<"\n\n";
  }

cout<<"Vettore"<<"\n\n";
  //Visualizzo valori del vettore B
  for(int i=0; i<N; i++)
  {
        cout<<B[i]<<" ";

  }

    //Chiamo il metodo
    int *c= calcola(A,Riga,B);

     
     
     //Visualizzo vettore c

    cout<<"\n\n";
	cout<<"Vettore c:\n";
	for(int i=0;i<contaelementi;i++)
		{

		   cout<<c[i]<<" ";
		}

}
