#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int x;
	float y=0;
	cout << "masukkan jumlah data yang ingin dihitung reratanya:";cin >> x;
	int array[x];
	for(int i=0;i<x;i++){
		cout << "masukkan nilai ke-" << i+1 << ":";cin >> array[i];
		
	}
	
	for(int b=0;b < x;b++){
		y=y+array[b];
	}
	cout << "Rata-rata nilai:" << y/x;
	getch();
}
