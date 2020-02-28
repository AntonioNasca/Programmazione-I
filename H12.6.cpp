/* Scrivere un programma in C++ finalizzato 
al calcolo dei valori di dosaggio per la ricetta di un dolce

 il programma chiede all'utente di inserire un numero compreso tra
  2 e 16 che rappresenta il numero di persone che mangeranno il dolce.
 
 Il programma chiede all'utente di inserire un valore che indica se tra i commensali ci sono diabetici.
 
 l programma calcola il dosaggio nel seguente modo:
 
 
 A dosaggio "Base", per un numero dci persone conmpreso tra 2 e 4 (estremi inclusi): 0.3 Kg di farina, 4 uova, 0.1Kg di zucchero.
 
 B dosaggio "medio", per un numero di persone compreso tra 5 e 8 (estremi inclusi). 2 Volte e mezzzo il dosaggio per la farina e le uova, 1 volta e mezzo il dosaggio dibase di zucchero.
 
 C dosaggio "esteso", per un numero di persone compreso tra 9 e 16 (estremi inclusi): in qusto caso il dosaggio andrà calcolato come la somma dei dosaggi dei due casi precedenti (medio e base).
 
 Inoltre:
 
 - Se ci sno diabetici tra i commensali, usare il fruttosio al posto delo zucchero, e la dose sarà la seguente: Dosaggio Fruttosio=2/(3 X dossaggio Zecchero).
 
 - il numero di uova vanno arrotondanti sempre per eccesso(ES:2.1-->3,2.9-->3,9.45-->10).

*/

#include <iostream>
#include <iomanip>
#include <cmath> //Sarebbe la libreria <math.h>

bool  diabetici=false;

using namespace std;

int main(){
	
	float persone,tot,kgfarina=0.3,uova=4,kgzucchero=0.1,fruttosio=0;
	
	string risposta;
	
	cout<<"Quante persone mangeranno?";
	cin>>persone;
	
	
	if(persone>=2&&persone<=16)
	{
	   
	   cout<<"Tra queste persone ci sono diabetici?";
	   cin>>risposta;
	   cout<<"\n\n";
	   
		if(risposta=="si"||risposta=="SI")
		{
		
			diabetici=true;
		    
		
		}
		
		
		
		
		//Dosaggio base
		if(persone>=2&&persone<=4&&diabetici==false)
		{
			
		      
			 cout<<"0.3 Kg di farina, 4 uova, 0.1Kg di zucchero\n\n";
			
		}
		
		
		else  	if(persone>=2&&persone<=4)
		
		
		{
			   
			   fruttosio=2/(3 * kgzucchero);
			  cout<<"0.3 Kg di farina, 4 Uova,  "<<fruttosio<<"  Kg di fruttosio \n\n";
			   
				
			
		}
		
	
		//Dosaggio medio
		if(persone>=5&&persone<=8&&diabetici==false)
		{
			 
			
			cout<<"Uova: "<<fixed<<setprecision(1)<<uova<<"\n\n";
			kgfarina=2.5*kgfarina;
			uova=4*uova;
			kgzucchero=1.5*kgzucchero;
			tot=kgfarina+uova+kgzucchero;
			 cout<<"Ricetta: Kgfarina: "<<kgfarina<<", Uova:" <<uova<<", Kgzucchero: "<<kgzucchero<<"\n\n";
			
		}
		
		else if(persone>=5&&persone<=8)
		{
			
			fruttosio=2/(3 * kgzucchero);
			cout<<"Uova: "<<fixed<<setprecision(1)<<uova<<"\n\n";
			kgfarina=2.5*kgfarina;
			uova=4*uova;
			tot=kgfarina+uova+fruttosio;
			 cout<<"Ricetta: Kgfarina: "<<kgfarina<<", Uova:" <<uova<< ", KgFruttosio:" <<fruttosio<<"\n\n";
			
			
			
		}
		
		
		//Dosaggio esteso
		
		if(persone>=9&&persone<=16&&diabetici==false)
		{
		    
			cout<<"Uova: "<<fixed<<setprecision(1)<<uova<<"\n\n";
			kgfarina=(2.5*kgfarina)+kgfarina;
			uova=(4*uova)+uova;
			kgzucchero=(1.5*kgzucchero+kgzucchero);
			tot=(kgfarina+uova+kgzucchero);
			 cout<<"Ricetta: Kgfarina: " <<kgfarina<<", Uova:"  <<uova<<", Kgzucchero:"  <<kgzucchero<<"\n\n";
			
		}
		
		else if(persone>=9&&persone<=16)
		{
			
			fruttosio=2/(3 * kgzucchero);
			
			cout<<"Uova: "<<fixed<<setprecision(1)<<uova<<"\n\n";
			kgfarina=(2.5*kgfarina)+kgfarina;
			uova=(4*uova)+uova;
			kgzucchero=(1.5*kgzucchero+kgzucchero);
			fruttosio=fruttosio+kgzucchero;
			tot=(kgfarina+uova+fruttosio);
			 cout<<"Ricetta: Kgfarina: "<<kgfarina<<", Uova:" <<uova<<", KgFruttosio:" <<fruttosio<<"\n\n";
			
			
			
		}
		
	
    } 
    
    else
    cout<<"Le persone deve essere minimo 2 e massimo 16!!\n\n";
	
}
