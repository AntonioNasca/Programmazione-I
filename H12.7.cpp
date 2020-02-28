/* Tre vasche A,B, e C raccolgono acqua da 15 tubi differenti.

-La vasca A riceve l'acqua convogliata nei tubi 1,5,6,10.

- La vasca B riceve l'acqua covogliata nei tubi da 2 a 4 e da 7 a 9.

- La vasca C riceve l'acqua convogliata nei rimanenti tubi.11,12,13,14,15

Inoltre, i tubi con numero dispari hanno una portata di 60 litri al minuto, 
mentre quelli con numero pari hanno una portata di 120 litri al minuto.

Codificare un programma in linguaggio C++ che esegua le seguenti operazioni:

- Il programma chiede in input all'utente 5 numeri distinti, compresi tra 1 e  15, 
tali numeri rappresentano 5 differenti tubi: 
NB: Il programma deve operare un controllo sulla validità 
del'input(ad esempio che i numeri siano tutti differenti tra loro);

- Il programma chiede all'utente il numero totale di minuti (M)
durante i quali i tubi specificati forniranno acqua alla rispettiva vasca.

NB: IL programma deve operare un controllo sulla validità dell'input, ad esempio 
che il numero immesso sia positivo.

- Il programma calcola e  stampa la quantità d'acqua raccolta in ogni 
vasca dopo gli M minuti spcificati dal'utente.

*/

#include <iostream>
#include <iomanip>
#include <cmath> //Sarebbe la libreria <math.h>




int tubo2=120,tubo4=120,tubo6=120,tubo8=120,tubo10=120,tubo12=120,tubo14=120; //Tubi pari

int tubo1=60,tubo3=60,tubo5=60,tubo7=60,tubo9=60,tubo11=60,tubo13=60,tubo15=60; //Tubi dispari

int vascaA=0,vascaB=0,vascaC=0;

 int n1,n2,n3,n4,n5,ng=0,M;
using namespace std;

int main(){
	
	
	 cout<<"Scegli un numero tra 1 e 15:";
	 cin>>n1;
	 
	 cout<<"Scegli un numero tra 1 e 15:";
	 cin>>n2;
	 
	 cout<<"Scegli un numero tra 1 e 15:";
	 cin>>n3;
	 
	 cout<<"Scegli un numero tra 1 e 15:";
	 cin>>n4;
	 
	 cout<<"Scegli un numero tra 1 e 15:";
	 cin>>n5;
	 
	 cout<<"Scegli il numero totale di minuti:";
	 cin>>M;
	 
	 cout<<"\n\n";
	 
	
	 
	 //Controlo N1
	 if(n1>=1&&n1<=15&&n1!=n2&&n1!=n3&&n1!=n4&&n1!=n5)
	 {
	 	
	 	
	 	
	 }
	 
	 else
	 {
	 	
	 	ng++;
	 }
	 
	 //Controlo N2
	 if(n2>=1&&n2<=15&&n2!=n1&&n2!=n3&&n2!=n4&&n2!=n5)
	 {
	 	
	 	
	 	
	 }
	 
	 else
	 {
	 	ng++;
	 }
	 
	 
	 //Controlo N3
	 if(n3>=1&&n3<=15&&n3!=n1&&n3!=n2&&n3!=n4&&n3!=n5)
	 {
	 	
	 	
	 	
	 }
	 
	 else
	 {
	 	ng++;
	 }
	 
	 //Controlo N4
	 if(n4>=1&&n4<=15&&n4!=n1&&n4!=n2&&n4!=n3&&n4!=n5)
	 {
	 	
	 	
	 	
	 }
	 
	 else
	 {
	 	ng++;
	 }
	 
	 //Controlo N5
	 if(n5>=1&&n5<=15&&n5!=n1&&n5!=n2&&n5!=n3&&n5!=n4)
	 {
	 	
	 	
	 	
	 }
	 
	 else
	 {
	 	ng++;
	 }
	 
	 
	 //Controllo se i numeri sono corretti e inizio ad riempire le vasche
     if(ng==0&&M>0)
     {
     	//Consideriamo di convertire i minuti in secondi perchè ci muoveremo con il contatore
     	//sappiamo che 360 secondi sono uguali ad un minuto, quindi:
     	int s=360*M;
     	
     	//Vasca A
     	for(int i=0;i<s;i++)
     	{
     		
     		if(n1==1||n2==1||n3==1||n4==1||n5==1)
     		{ 
     		    
     		    vascaA=vascaA+tubo1;
			}
			
			if(n1==5||n2==5||n3==5||n4==5||n5==5)
     		{ 
     		    
     		    vascaA=vascaA+tubo5;
			}
			
			if(n1==6||n2==6||n3==6||n4==6||n5==6)
     		{ 
     		    
     		    vascaA=vascaA+tubo6;
			}
			
			if(n1==10||n2==10||n3==10||n4==10||n5==10)
     		{ 
     		    
     		    vascaA=vascaA+tubo10;
			}
     		
     		
     		
		}
		
		cout<<"Vasca A Totale: " <<vascaA<<" litri.\n\n";
		
		//Vasca B
     	for(int i=0;i<s;i++)
     	{
     		 
     		if(n1==2||n2==2||n3==2||n4==2||n5==2)
     		{ 
     		    
     		    vascaB=vascaB+tubo2;
			}
			
			if(n1==3||n2==3||n3==3||n4==3||n5==3)
     		{ 
     		    
     		    vascaB=vascaB+tubo3;
			}
			
			if(n1==4||n2==4||n3==4||n4==4||n5==4)
     		{ 
     		    
     		    vascaB=vascaB+tubo4;
			}
			
			if(n1==7||n2==7||n3==7||n4==7||n5==7)
     		{ 
     		    
     		    vascaB=vascaB+tubo7;
			}
			
			if(n1==8||n2==8||n3==8||n4==8||n5==8)
     		{ 
     		    
     		    vascaB=vascaB+tubo8;
			}
			
			if(n1==9||n2==9||n3==9||n4==9||n5==9)
     		{ 
     		    
     		    vascaB=vascaB+tubo9;
			}
     		
     		
     		
		}
		
		cout<<"Vasca B Totale: " <<vascaB<<" litri.\n\n";
     	
     	
     	
     	
     	//Vasca C
     	for(int i=0;i<s;i++)
     	{
     		
     		if(n1==11||n2==11||n3==11||n4==11||n5==11)
     		{ 
     		    
     		    vascaC=vascaC+tubo11;
			}
			
			if(n1==12||n2==12||n3==12||n4==12||n5==12)
     		{ 
     		    
     		    vascaC=vascaC+tubo12;
			}
			
			if(n1==13||n2==13||n3==13||n4==13||n5==13)
     		{ 
     		    
     		    vascaC=vascaC+tubo13;
			}
			
			if(n1==14||n2==14||n3==14||n4==14||n5==14)
     		{ 
     		    
     		    vascaC=vascaC+tubo14;
			}
			
			if(n1==15||n2==15||n3==15||n4==15||n5==15)
     		{ 
     		    
     		    vascaC=vascaC+tubo15;
			}
     		
     		
     		
		}
		
		cout<<"Vasca C Totale: " <<vascaC<<" litri.\n\n";
     	
     	
     	
     	
     	
	 }
     
     //Numeri non corretti
     else
	 
	 {
	 
     
        cout<<"\n\n";
     	cout<<"Errore digitazione.Hai sbagliato una delle tre regole del programma\n\n";
     	cout<<"1. Hai digitato un numero non compreso tra 1 e 15\n\n";
     	cout<<"2. Hai inserito numeri uguali\n\n";
     	cout<<"3. Hai inserito numeri negativi\n\n";
	 }
	 
	
}
