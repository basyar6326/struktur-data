#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int x;
	float y=0,z=0;
	cout << "masukkan jumlah data yang ingin dihitung reratanya:";cin >> x;
	int array[x];
	int array2[x];
	for(int i=0;i<x;i++){
		cout << "masukkan nilai ke-" << i+1 << ":";cin >> array[i];
		
	}
	
	for(int b=0;b < x;b++){
		y=y+array[b];
	}
	y=y/x;
	
	for(int i=0;i<x;i++){
		array2[i]=array[i]-y;
	}
	for(int i=0;i<x;i++){
	    array2[i]=pow(array2[i],2);
	   
	}
	for(int i=0;i<x;i++){
	    z=z+array2[i];
	}
	z=z/(x-1);
    cout << "rata-rata data:" << y << endl;
    cout << "standar deviasinya:" << sqrt(z);
	
	getch();
}

