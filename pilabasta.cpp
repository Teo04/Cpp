/*
**pilabasta.cpp
*/
#include <iostream>
#include <string>
using namespace std;
//La pila usa la politica First In First Out (FIFO)
class Pila{
	public:
	string dati[100];
	int p=0;
	bool isEmpty(){
		return p==0;
	}
	void push(string parola){
        dati[p]=parola;
        p++;
	}
	string pop(){
		p--;
		return dati[p];
	}
};
int main(){
	Pila p;
	string parola;

	while (true){
		cout<<"inserisci una parola: "<<endl;
		cin>>parola;
		if (parola=="basta") break;
		p.push(parola);
	}
	while(!p.isEmpty()){
		cout<<p.pop()<<endl;
	}
	return 0;
}
