/*
 * Matteo Grandi
 * Mastermind.cpp
 * 5/3/2021
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Mastermind{
	private:
	void init(){
		srand(time(NULL));
		for(int i=0; i<5; i++){
			mappa[i]= (rand () %10)+1;
			for(int j=0; j<i; j++){
				if(mappa[i]==mappa[j]){
					i--;
				}
			}
		}
	}
	int mappa[5];
	int test[5];
	public:
	Mastermind(){
		init();
	}
	void stampa(){
		for(int i=0; i<5; i++){
			cout<<mappa[i]<<"\t";
		}
		cout<<endl;
	}
	void play(){
		cout<<"Inserisci 5 numeri interi"<<endl;
			for(int i=0; i<5; i++){
				cin>>test[i];
				for(int j=0; j<i; j++){
					while(test[i]==test[j]){
						cout<<"Un numero e' stato ripetuto, inseriscine un altro"<<endl;
						cin>>test[i];
					}
				}
			}
			for(int i=0; i<5; i++){
				cout<<test[i]<<"\t";
			}
	}
	bool check(){
		int strike=0;
		int ball=0;
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				if(test[i]==mappa[j]){
					if(i==j){
						strike++;
					}
					else ball++;
				}
			}
		}
		cout<<"Strike: "<<strike<<endl;
		cout<<"Ball: "<<ball<<endl;
		return strike==5;
	}
};
int main(){
	cout<<"Programma mastermind avviato"<<endl;
	Mastermind m;
	m.stampa();
	do{
		m.play();	
	}while(!m.check()); //while not
		
	return 0;
}
