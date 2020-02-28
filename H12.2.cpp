/*Codificare un programma in linguaggio C++ nel 
quale si chiedano all'utente 
tre numerida tastiera.

Il programma deve calcolare e stampare l'arrotondamento 
del valore piu' vicino di ogni 
numero inserito dall'utente*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
 float a,b,c,arr;
	
	cout<<"Scegliere valore di a:\n\n";
    
    cin>>a;
    
	cout<<"Scegliere valore di b:\n\n";	
	
	cin>>b;
	
	cout<<"Scegliere valore di c:\n\n";	
	
	cin>>c;
	
    cout<<"\n\n";	
    
    a=a*100;
    b=b*100;
    c=c*100;
    
    
	if(a>b&&a>c?arr=a:b>c?arr=b:arr=c)
	{
		arr=arr/100;
		cout<<"Valore piu' vicino  "<<arr<<"\n\n";
	}
	

	
} 
