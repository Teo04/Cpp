#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int generanumero(){
	srand(time(NULL));
	return (rand() % 10) +1;
}

int main(){
	
	int numgenerato=generanumero();
	cout<<numgenerato;
	
	cout<<"scegli un numero minore o uguale a 10"<<endl;
	int n;
	int tentativi;
	cin>>n;
	tentativi=0;
	
	while(n>10){
		cout<<"hai scelto un numero troppo grande inseriscine un altro"<<endl;
		cin>>n;
	}
	do{
		while(tentativi<3){
			if(n==numgenerato){
				cout<<"BRAVOOO hai vinto";
				break;
			}
			else if(n!=numgenerato){
				cout<<"mi dispiace hai sbagliato"<<endl;
				tentativi=tentativi+1;
				cout<<"inserisci un altro numero"<<endl;
				cin>>n;
			}
		}
		if(n!=numgenerato){
			cout<<"hai perso"<<endl;
			break;
		}
	}
	while(n!=numgenerato);
	
	return 0;
}

