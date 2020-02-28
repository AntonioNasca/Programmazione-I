/* Codificare un programma in linguaggio C++ che chieda all'utente
di inserire il raggio di un cerchio.

Il programma dovrà calcolare e stampare
 l'area e la circonferenza del cerchio

*/

#include <iostream>
#include <iomanip>
#include <cmath> //Sarebbe la libreria <math.h>

#define p 3.14

using namespace std;

int main(){
	
	
	double r,a,c;
	
	
	cout<<"Inserire valore del raggio:";
	cin>>r;
	
    cout<<"\n\n";
	
	if(a>0)
	{
		a=pow(r,2)*p;
		
		c=2*p*r;

		cout<<"L'Area ha valore:"<<a<<"\n\n";
		
		cout<<"La circonferenza ha valore:"<<c<<"\n\n";
		
		cout<<"L'Area arrotondata ha valore:"<<fixed<<setprecision(1)<<a<<"\n\n";
		
		cout<<"La circonferenza arrotondata ha valore:"<<fixed<<setprecision(1)<<c<<"\n\n";
		
	}
	
	else
	{
		cout<<"Devi inserire valori positivi\n\n";
	}
	
}
