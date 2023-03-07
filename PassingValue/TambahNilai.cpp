#include <iostream>
using namespace std;

void TambahAngka(int *a, int berapa){
	*a += berapa;
}

int main(){
	int Angka, Tambahan;
	cout << "Masukkan angka: ";
	cin >> Angka;
	cout << "Mau nambah berapa?: ";
	cin >> Tambahan;
	
	TambahAngka(&Angka, Tambahan);
	cout << "Angka Setelah ditambahkan: " << Angka << endl;
}
