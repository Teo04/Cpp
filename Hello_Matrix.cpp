/*
* Hello_Matrix.cpp
* Compito usando le matrici creando una tavola pitagorica
* Autore: Matteo Grandi
* Data: 15/12/2020
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void riempimatrice (int matrice[10][10], int valore){
    for (int r=0;r<10; r++){
        for (int c=0;c<10; c++){
            valore = rand() % 10;
            matrice[r][c]= valore;
        }
    }
}
void tavolapitagorica(int matrice[10][10]){
	for (int r=0;r<10; r++){
        for (int c=0;c<10; c++){
        	matrice[r][c]= (r+1)*(c+1);
			cout<<matrice[r][c]<<" \t";
        }
        cout<<endl;
    }
}
int sommamatrice(int matrice[10][10]){
	int somma=0;
	int r=0;
        for (int c=0; c<10; c++){
        	somma=somma+matrice[r][c];
        }
        return somma;	
}
int main (){
	int somma;
	int m[10][10];
	srand(time(NULL));
	riempimatrice(m,10);
	tavolapitagorica(m);
	cout<<"la somma della riga della matrice e': "<<sommamatrice(m)<<endl;

    return 0;
}

