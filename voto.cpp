#include <iostream>
#include <time.h>
#include <ctime>
#include <cstdlib>

using namespace std;
void riempimatrice (int matrice[5][5], int s){
    for (int r=0;r<s; r++){
        for (int c=0;c<5; c++){
            matrice[r][c]= rand() % 10;
            while(matrice[r][c]<2){
            	matrice[r][c]= rand() % 10;
			}
        }
    }
}
void stampamatrice(int matrice[5][5],int s){
	for (int r=0; r<s; r++){
		char cognomi[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        cout<<cognomi[rand() % 26];
    	for (int c=0; c<5; c++){
    		cout<< matrice[r][c]<<" ";
    	}
    	cout<<endl;
    }
}
float mediatot(int matrice[5][5], int s){
	float somma=0;
	float media=0;
	int materie=5;
	int tot;
	for (int r=0;r<s; r++){
        for (int c=0; c<5; c++){
        	somma=somma+matrice[r][c];	
			tot=materie*s;
        	media=somma/tot;
        }
    }
	return media;	
}
float mediastud(int matrice[5][5], int s){
	float somma=0;
	int r=0;
	int materie=5;
	float media;
	int ms;
	cout<<"di che studente vuoi fare la media??"<<endl;
	cin>>ms;
	ms--;
	for (int c=0; c<5; c++){
    	somma=somma+matrice[ms][c];
        media=somma/materie;
	}
    return media;	
}
float mediamateria(int matrice[5][5], int s){
	float somma=0;
	float media=0;
	int materia;
	cout<<"di che materia vuoi fare la media??"<<endl;
	cin>>materia;
	while(materia>5||materia<1){
		cout<<"materia inesistente"<<endl;
		cin>>materia;
	}
	materia--;
	for (int r=0;r<s; r++){
		somma=somma+matrice[r][materia];
		media=somma/s;	
	}
	return media;
}
int main(){
	int s;
	cout<<"quanti studenti ci sono??"<<endl;
	cin>>s;
	int m[s][5];
	srand(time(NULL));
	riempimatrice(m,s);
	stampamatrice(m,s);
	cout<<"la media totale della matrice e'"<<mediatot(m,s)<<endl;
	cout<<"la media e'"<<mediastud(m,s)<<endl;
	cout<<"la media della materia e'"<<mediamateria(m,s)<<endl;

	return 0;
	
}
