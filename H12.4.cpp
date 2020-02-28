/* Codificare un programma in linguaggio C++ che calcoli 
e stampi l'ipotenusa di un triangolo rettangolo.

L'utente dovrà inserire i due cateti a e b 
da tastiera. Il programma dovrà controllare che i valori 
inseriti siano positivi.

*/

#include <iostream>
#include <iomanip>
#include <cmath> //Sarebbe la libreria <math.h>

using namespace std;

int main(){
	
	
	double a,b,i;
	
	cout<<"Inserire valore cateto a:"<<"\n\n";
	cin>>a;
	
	cout<<"Inserire valore cateto a:"<<"\n\n";
	cin>>b;
	
	if(a>0&&b>0)
	{
		i=pow(a,2)+pow(b,2);
		i=sqrt(i);

		cout<<"L'ipotenusa ha valore:"<<i<<"\n\n";
		
		
		cout<<"L'ipotenusa arrotondata:"<<fixed<<setprecision(1)<<i<<"\n\n";
		
	}
	
	else
	{
		cout<<"Devi inserire valori positivi\n\n";
	}
	
}
