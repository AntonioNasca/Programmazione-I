/*Codificare un programma in linguaggio C++ nel quale si chiedano all'utente 
due numeri virgola mobile(a e b) da tastiera.

Il programma deve calcolare e stampare la somma, la media, ed il max tra i due mnumeri,
tutti gli output del programma dovranno essere in notazione scientifia , 
con una precisione di 4 cifre dopo la virgola*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
 float a,b,somma,media,max;
	
	cout<<"Scegliere valore di a:\n\n";
    
    cin>>a;
    
	cout<<"Scegliere valore di b:\n\n";	
	
	cin>>b;
	
     cout<<"\n\n";	
	
	//somma
	somma=a+b;
	cout<<"La Somma e':"<< fixed << setprecision(4) <<somma <<"\n\n";
	
	//Media
	media=(a+b)/2;
	cout<<"La media e'':"<<fixed<<setprecision(4)<<media<<"\n\n";
	
	//Max
	if(a>b?max=a:max=b)
	{
		cout<<"Il numero maggiore e':"<<fixed<<setprecision(4)<<max<<"\n\n";
	
	}

    cout<<"Precisione con 4 cifre ;)";

	
} 
