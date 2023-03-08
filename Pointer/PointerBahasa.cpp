#include <iostream>
#include <cstring>
using namespace std;

int main(){
	//membuat pointer multiple indirection bertipe char
	char **bahasa;
	//3 di sini adalah seberapa banyak data yang akan dimasukkan ke dalam array
	int const SIZE = 4;
	bahasa = new char *[SIZE];
	
	//2 di sini adalah seberapa panjang karakter yang akan dimasukkan. 2 = 3 ya karena 0 nya kan dihitung
	bahasa[0] = new char[2];
	strcpy(bahasa[0], "AKU");
	
	bahasa[1] = new char[2];
	strcpy(bahasa[1], "DIA");
	
	bahasa[2] = new char[3];
	strcpy(bahasa[2], "KAMU");
	
	bahasa[3] = new char[5];
	strcpy(bahasa[3], "MEREKA");
	
	for(int i = 0; i < SIZE; i++){
		cout << bahasa[i] << endl;
		delete [] bahasa[i];
	}
	
	delete [] bahasa;
}
