/*Descrivere un algoritmo in notazione NLS che prende input una matrice 
o una array bidimensionale V di dimesione NxM,una 
seconda matrice W di dimensione LxQ che 
contiene elementi disitnti, ed un numero p.

L'algoritmo deve stampare tutti gli 
elementi della matrice W  che compaiono 
almeno p volte in V  */

#include <iostream>

using namespace std;

int main(){
	
	int c,r,c1,r1,p,n;

	
	cout<< "Scegliere quante colonne vuoi nella matrice 1 \n";
	cin>>c;
	
	cout<< "Scegliere quante righe vuoi nella matrice 1 \n ";
	cin>>r;
	
	cout<< "Scegliere quante colonne vuoi nella matrice 2 \n";
	cin>>c1;
	
	cout<< "Scegliere quante righe vuoi nella matrice 2 \n ";
	cin>>r1;
	
	cout<< "Scegliere il numero p\n ";
	cin>>p;
	
	
	

	

	
		//Creazione matrice 1
		int v [c][r];

		for(int i=0;i<r;i++)
		{
	
		  for(int j=0;j<c;j++)
	  		{
	  			cout<<"Numero da inserire nella matrice 1 \n";
	  			cin>>n;
	  			v[j][i]=n;
	  		}
	  
    	}  
    	
    	//Creazione matrice 2
		int w [c1][r1];

		for(int i=0;i<r1;i++)
		{
	
		  for(int j=0;j<c1;j++)
	  		{
	  			cout<<"Numero da inserire nella matrice 2 \n";
	  			cin>>n;
	  			w[j][i]=n;
	  		}
	  
    	}  
    
    
    
    
    	//Visualizzare matrice 1

  	 cout <<"Matrice 1:\n";
   
		for(int i=0;i<r;i++)
		{
	
	 	 for(int j=0;j<c;j++)
	 	 {
	  	
	  		cout<<" "<<v[j][i];
	   	 }
	    
	  		cout<<"\n\n";
    	}  
    
    
    	
    	//Visualizzare matrice 2

  	 cout <<"Matrice 2:\n";
   
		for(int i=0;i<r1;i++)
		{
	
	 	 for(int j=0;j<c1;j++)
	 	 {
	  	
	  		cout<<" "<<w[j][i];
	   	 }
	    
	  		cout<<"\n\n";
    	}  
    
	 	 
	 	 //Controllo elementi uguali a Matrice W su V per p volte
	 	n=0;
	 	 for(int x=0;x<r1;x++)
	 	 {
				 
		 		for(int z=0;z<c1;z++)
	 	 		{
		 
		 	       	n=0;
						for(int i=0;i<r;i++)
	 	 				{
		 
		 	       		        for(int j=0;j<c;j++)
	 	 						{
		 
		 	       		      
		                           //cout<<"Matrice 1: "<<v[j][i]<<" Matrice 2: "<<w[z][x]<<"\n\n";
		                          
		                            if(w[z][x]==v[j][i])  
									{
									  //	cout<<" il numero" <<w[z][x]<< " e' uguale a " <<v[j][i]<<"\n\n";
									  	n++;
										//cout<<"N vale"<<n<<"\n\n";	
									} 
		                           
		                            if(n==p)
				 					  {	
				 									;
	 										cout<<"Il Numero "<<w[z][x]<<" si ripete piu' di "<<p<<" volte \n\n";
	 						     			n=0;
	 			                      }       
			                    }
		       	
		                   
		                   
		 
		 				}
		 				
		 				
		       	
						
						
						
						
						
							
		 
		 
		 
		 		}
		       	
		       		
		 
		 
		 }
	
				   
				       
					
					
					
					
					
						
						
					
					
		        		
		            
		    	
		    	
		    	
		    	         
			
			
	    	
		
		
					
						
						
						
						
								
						
						
						
						
						
						
						
		 
		 
		 
		 
		 
		 
		 
		 
		 }
	 		
						
						
						
						
					
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
			
	
	
    
    
    
    
		  
	
	





