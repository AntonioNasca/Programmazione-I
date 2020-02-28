#include <iostream>
#include <string>
#include<ctime>
#include <stdlib.h> 

#define DIM 30

using namespace std;


class A
{

private:
    string s;

public:
    A(string a)
    {
        s = a;
    }

    string getS() const
    {
        return s;
    }

    bool doppia()
    {
    	 bool doppia=false;
        string carattere = "";
        for(int i=0; i<s.length(); i++)
        {
            carattere = s[i];
            int counter = 0;
            for(int k=0; k<s.length(); k++)
            {
                if(s[i] == s[k])
                    counter++;
            }
            if(counter >= 2)
                doppia=true;
            else
               doppia=false;
        }
        return doppia;
        cout<<doppia;
    }

    virtual string nuova() = 0;
};

class B : public A
{
private:
    int y;
public:
    B(string j, int a):A(j)
    {
           y = a;
    }

    bool doppia()
    {
        string frase = getS();
        string vocale;
        string carattere = "";
        int counter;
        bool doppia=false;
        for(int i=0; i<frase.length(); i++)
        {
            counter = 0;
    
           if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u')
            {		  
				vocale[i]=frase[i];
				  	
                for(int k=1; k<frase.length(); k++)
                {
                	
                     if(vocale[i]== frase[k])
                     counter++;
					
                        
                }
                
                	if(counter >= 2)
                	doppia=true;
                    
                    
				

            
            
                   
            }
            
        else doppia=false;
					
            
        }
        
        return doppia;
    
    }

    string nuova()
    {
        string frase = getS();
    
       
        if(y%3 == 0)
        {
         
			
			string  nuova=frase.substr(frase.length()-3,frase.length());
			
		
			return nuova;
			
        	
		}
            
    }
    
    
	string nuovac(short s){
	
		
		string nuova=getS();
		
		for(int i=0;i<s;i++)
		{
			 char x = nuova.at(i);
			cout<<int(x);
			
		}
		
	}
    
    
};
 class C:public  A{
	
	protected:  char char1;
	
	public:
		
		C(string x,char y):A(x)
		{
			y=char1;
		}
		
		
		
	string nuova()
	  {
	  	  string s=getS();
	  	  string nuova=s;
	  	  
	
	  	  for(int i=1;i<s.length();i++)
	  	  {
	  	  	    
	  	     	nuova[i]='*';
	  	     
		  }
		  return nuova;
	  }
};

class D:public C{
	
   public :D(string x,char y):C(x,y){}
	
	string nuova(short s){
	
		
		string nuova=getS();
		
		for(int i=0;i<s;i++)
		{
			cout<<int(nuova[i]);
			printf("ciao");
			
		}
		
	}
	
};

int main()
{
    
    A* vett[DIM];
    srand(111222333);
    for(int i=0;i<DIM;i++)
    {
    	int p=rand()%5+3;
    	string str="";
		for(int j=0;j<p;j++)
		{
			str+=(char) ('a'+rand()%26);
			if(rand()%2==1)
			{
				//vett[i]=new D(str, (char) ('a'+rand()%26));
				//Bisogna creare classe D
				
			}
			
			else
				vett[i]=new B(str, (char) ('a'+rand()%26));
				
			
		}
		
	}
	
	
	
	char spazio = 'ciao';
	
    D* d=new D("ciao",spazio);
    cout<< d->nuova(5);
   //cout<<b->nuovac(5)<<endl;
	
	
    
}
