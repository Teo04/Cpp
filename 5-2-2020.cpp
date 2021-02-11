/*
*   5-2-2020.cpp
*   Autore: Matteo Grandi
*   Data: 05/02/2021
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class lista{
private:
    string* dati;
    int l;
    int top=0;
public:
    lista(int lunghezza){
        l = lunghezza;
        dati= new string [l];
    }
    int size(){
        cout<<l<<endl;
        return l;
    }
    string read(int i){
        return dati[i];
    }
    void print(){
        for (int i=0; i<l; i++){
            cout<<read(i)<<endl;
        }
    }
    void add(string valore){
        if(top<100){
            dati[top]= valore;
            top++;
        }
    }
    string generastringa(){
        string s;
        int x =(rand() % 20) + 1;
        for (int i=0; i<x; i++){
            s=s+"*";
        }
        return s;
    }
};
int main(){
    lista f(100);
    f.size();
    srand(time(NULL));

    for (int i=0; i<100; i++){
        f.add(f.generastringa());
    }
    f.print();
    
	return 0;
}
