#include <iostream>
using namespace std;

int main(){

	char x;

	while(true){
		cout<<"hello world"<<endl;
		do{
			cout<<"vuoi continuare? (S/N):";
			cin>>x;
		}while(x!='s'&&x!='n');
		if(x=='n'){
			break;
		}
}
	
	return 0;
}

