/*
* battleshipone1.cpp 
* Una battaglia navale contro il computer sulla costa
* Autore: Matteo Grandi
* Data: 4/12/2020
 help sui codici della mappa: 0-empty, 1-ship, 2-bomb, 3-strike
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void initialize(int v[], int l){
	for(int i=0; i<l; i++) v[i]=0;
}

void show(int v[], int l){
	for(int i=0; i<l; i++){
        switch(v[i]){
            case 0:
                cout<<"O "<<endl;
                break;
            case 1:
                cout<<"O "<<endl;
                break;
            case 2:
                cout<<"- "<<endl;
                break;
            case 3:
                cout<<"* "<<endl;
                break;
            }
	}
	cout<<endl;
}

void arrange (int v[], int l){
	srand(time(NULL));
	int n= rand() % (l-1);
	v[n]=1;
	v[n+1]=1;
}

void launch(int v[], int l){
    int p= -1; 
    while(p<0||p>=l){
        cout<<"inserisci le coordinate di dove vuoi tirare la bomba (1..."<< l << "): ";
        cin>> p;
    }
    p--; 
    if(v[p]==0) v[p]=2;
    if(v[p]==1) v[p]=3;
}

bool weWon(int v[], int l){
    for(int i=0; i<l; i++){
        if(v[i]==1) return false;
    }
    return true;
}
int main()
{
    cout<<"battleshiptwo in esecuzione"<<endl;
    int numbomb=0;
	const int MAPLENGHT=10;
	int map[MAPLENGHT];
	initialize(map, MAPLENGHT); 
	arrange(map, MAPLENGHT); 
	show(map, MAPLENGHT); 
	while(true){
        numbomb++;
        launch(map, MAPLENGHT);
        show(map, MAPLENGHT);
        if(weWon(map, MAPLENGHT)){
            cout<<"HAI VINTOOOOOOO!!!!!"<<endl;
            break;
        }
	}
	if (numbomb<=3) cout<< "complimenti";
	else if (numbomb<=5) cout<< "bravino";
	else if (numbomb<=7) cout<< "accidenti";
	cout<<" hai distrutto la flotta nemica utilizzando "<< numbomb << " bombe"<<endl;

	return 0;
}
