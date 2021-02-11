#include <iostream>
using namespace std;

int main(){
	float p;
	int x;
	float ps;
	float pt;
	cout<<"inserisci il prezzo del biglietto";
	cin>> p;
	cout<<"inserisci un numero da 1 a 5"<<endl;
	cout<<"1)studente, 2) pensionato, 3) cittadini residenti nel comune di bologna, 4)portatori di handicap, 5)visitatore generale"<<endl;
	cin>> x;
	
	while (p<=0||x>5){
		cout<<"inserisci un numero maggiore di 0 o un numero minore di 6"<<endl;
		cin>>p;
		cin>> x;
	}
	
	switch (x){
		case 1: 
		cout<<"hai lo sconto del 50%"<<endl; 
		ps=p*50/100; 
		cout<<"lo sconto e' di"<<ps<<"euro"<<endl; 
		pt=p-ps;
		cout<< "devi pagare"<<pt<<"euro"<<endl; 
		break;
		
		case 2: 
		cout<<"hai lo sconto del 30%"<<endl; 
		ps=p*30/100; 
		cout<<"lo sconto e' di"<<ps<<"euro"<<endl; 
		pt=p-ps;
		cout<< "devi pagare"<<pt<<"euro"<<endl; 
		break;
		
		case 3: 
		cout<<"hai lo sconto del 25%"<<endl; 
		ps=p*25/100;  
		cout<<"lo sconto e' di"<<ps<<"euro"<<endl; 
		pt=p-ps;
		cout<< "devi pagare"<<pt<<"euro"<<endl; 
		break;
		
		case 4: 
		cout<<"entrata libera, non paghi nulla"<<endl; 
		break;
		
		default: 
		cout<<"non hai diritto a nessuna agevolazione"<<endl; 
		cout<<"il prezzo e'"<<p<<endl; 
		break;
	}
	return 0;
}
