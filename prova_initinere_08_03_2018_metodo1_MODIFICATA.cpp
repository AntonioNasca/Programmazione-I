#include <iostream>
#include <iomanip>
#include <stdlib.h>     
#include <time.h>

#define COLUMNS 3
#define ROWS 3

using namespace std; 

/* Per un array bidimensionale valgono 
  le stesse considerazioni. 
  Le celle dello array costituiscono un unico 
  blocco di memoria grande ROWSxCOLUMNSxsizoef(int). 
*/ 
bool controllsomm(int  A[][COLUMNS], int r,int n){
	
	int s1=0,s2=0, c=COLUMNS;
	bool divisibile=false;
	
	//Diagonale 1
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(j==i)
			{
				s1+=A[i][j];
				
			}
		}
	}
	cout<<"Somma diagonale 1="<<s1<<"\n\n";
	

	//Diagonale 2
	
		int j=c-1;r=0;
		
		while(j>=0)
		{
			int x=A[r][j];
			
			s2+=x;
			j--;
			r++;
			
			
		}
	
	cout<<"Somma diagonale 2="<<s2<<"\n\n";
	int stot=s1+s2;
	if(stot%n==0)
	{
		divisibile=true;
	}
	
   return divisibile;

}



int main(){

 bool indice=false;
  int n;
 
 
  int A[ROWS][COLUMNS] = {/* 1st row */ 2,2,4,  /*2nd row*/ 21,2,4,  /*3th row*/ 1,2,4  };  // 4x3
   
   cout<<"Inserisci N=  ";
   cin>>n;
  
  indice=controllsomm(A, ROWS,n); 
  if(indice==true)
  cout<<"E' divisibile\n\n";
  
  else
  cout<<"non E' divisibile\n\n";
}
