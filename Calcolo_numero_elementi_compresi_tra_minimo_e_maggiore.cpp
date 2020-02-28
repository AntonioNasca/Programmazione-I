/*Descrivere un algoritmo in notazione NLS 
che prende input una matrice V di dimensione M xN
o una array W di dimesione L.. 

L'algoritmo dovrà calcolare, per ogni riga di V, il numero 
di elementi delo array W che sono compresi tra il minimo 
e il massimo valore (estremi inclusi) della riga stessa.
*/

#include <iostream>

using namespace std;

int main(){
	
	int c,r,n,max,min,l;

	
	cout<< "Scegliere quante colonne vuoi nella matrice\n";
	cin>>c;
	
	cout<< "Scegliere quante righe vuoi nella matrice\n ";
	cin>>r;
	
	cout<< "Scegliere quanti elementi vuoi nel vettore\n";
	cin>>l;
	
	
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
    
    //Creazione vettore
	int w [l];

	  for(int i=0;i<l;i++)
	  {
	  	cout<<"Numero da inserire nel vettore\n";
	  	cin>>n;
	  	w[i]=n;
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
    
    
    //Visualizzare vettore
    cout <<"Vettore:\n";

	  for(int i=0;i<l;i++)
	  {
	  	
	  	cout<<" "<<w[i]<<" ";
	  }
	    cout<<"\n";
	    cout<<"\n";
	  
    
    
    
    //Calcolo valore massimo e minimo
    int i=0;
    while(i!=r)
   {

    //cout<<"sono entrato nel while\n";
    max=v[0][0],min=v[0][0];
    
    for(int j=0;j<c;j++)
    {
    	
    	
    	if(max<v[j][i])
    	{
    			max=v[j][i];
		}
    		
		
		if(min>v[j][i])
    	{
    			min=v[j][i];
		}
    	
    }
	//cout<<"Il numero max nella riga "<<i<<" e "<<max<<"\n\n";
	//cout<<"Il numero min nella riga "<<i<<" e "<<min<<"\n\n";
	int nc;
	for(int i=0;i<l;i++)
	{
		if(w[i]>=min&&w[i]<=max)
		{
			//cout<<"Il numero"<<w[i]<<"e maggiore/uguale di "<<min<<"\n\n";
			//cout<<"Il numero"<<w[i]<<"e minore/uguale di "<<max<<"\n\n";
			
			nc++;
		}
		
	}
	
	 cout<<"Numeri compresi nella riga "<<i<<" sono:"<<nc<<"\n\n";
	nc=0;
	i++;
   }	
	
	
    
    
    
    
		  
	
	
}




