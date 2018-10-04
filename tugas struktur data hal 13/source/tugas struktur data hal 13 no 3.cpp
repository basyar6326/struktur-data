#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a=0,b=0;
	char nama[20];
	cout << "masukkan nama:";
	cin.getline(nama,20);
	do{
	    a++;
	}while(nama[b++]!='\0');
	int k = a;
	for(int i=0;i<k;i++){
		for(int j=0;j<a-1;j++){
		    cout << nama[j];
		}
		cout << endl;
		a--;
		
	}
	getch();
}
