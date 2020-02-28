/*Codificare un programma in linguaggio C++ che chieda 
all'utente di inserire da tastiera il proprio nome e cognome.
successivamente il programma dovrà stampare 
le seguenti informazioni:

1 il primo e l'ultimo carattere del nome, ll secondo e il terzo carattere del cognome.

2. una stringa formata da tutti i caratteri che 
sono presenti  sia nel nome che nel cognome. 
ES: se nome="Mario", cognome ="Rossi" l'output sarà "rio".

3. la segg. ulterio informazioni:

-a un messaggio che comunica all'utente se la prima lettera del nome è uguale all'ultima lettera del cognome 

-b un messaggio che comunica all'utente se il numero di caratteri del nome è uguale al numero di lettere del cognome 

-c il numero di consonanti del nome e del cognome 
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	
 string nome,cognome;
 
 
 cout<<"Digita il tuo nome:";
 
 cin>>nome;
 
 cout<<"Digita il tuo cognome:";
 
 cin>>cognome;
 
 //Controllo 1
 
 string controllo1= nome.substr(0,1);
 
 string  controllo2= nome.substr(nome.length()-1,1);
 
 string controllo3=cognome.substr(1,2);
 
 cout<<"\n\n";
 
 cout<<"Prima e ultima lettera del nome ;"<<controllo1<<controllo2<<"\n\n";
 cout<<"Seconda e terza lettera del cognome:"<<controllo3<<"\n\n";
 
 //Controllo 2
 controllo1="";
 int n=0;
 for(int i=0;i<cognome.length();i++)
 {
   
    
 	for(int j=0;j<nome.length();j++)
 	{
       		n=0;
	 
      
 	    if(nome[j]==cognome[i])
 	    {
		   	n++;
		   	
		    if(n==1)
		   	{
				controllo1=controllo1+nome[j];
		   		
		   	
		   		
		    }
		   	
		   
		   
		   	
		      
		}
 	}
 }
	
	cout<<"Le lettere uguali tra il nome e il cognome sono:"<<controllo1<<"\n\n";

	
	//Controllo 3 a)
	
	if(nome[0]==cognome[cognome.length()])
	{
		cout<<"La prima lettera del nome e' uguale all'ultima lettera del cognome\n\n";
		
	}
	
	//Controllo 3 b)
	if(nome==cognome)
	{
		cout<<"Nome e cognome hanno la stessa dimensione\n\n";
		
	}
	
	
	//Controllo 3 c) Nome
	 n=0;
	 string consonanti="aeiou";
	for(int i=0;i<consonanti.length();i++)
 {
   
    
 	for(int j=0;j<nome.length();j++)
 	{
       		
	 
      
 	    if(nome[j]==consonanti[i])
 	    {
		   	n++;
		   	
		    
		   	
		   
		   
		   	
		      
		}
 	}
 }
	
	cout<<"Consonanti nome:"<<n<<"\n\n";
	
	
	//Controllo 3 c) Cognome
	 n=0;
	for(int i=0;i<cognome.length();i++)
 {
   
    
 	for(int j=0;j<cognome.length();j++)
 	{
       		
	 
      
 	    if(nome[j]==consonanti[i])
 	    {
		   	n++;
		   	
		    
		   	
		   
		   
		   	
		      
		}
 	}
 }
	
	cout<<"Consonanti cognome:"<<n<<"\n\n";
	
	 
	
	
	
	
	
	
} 
