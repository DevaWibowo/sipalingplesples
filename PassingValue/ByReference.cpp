#include <iostream>
using namespace std;

void Tambah1(int &a){
	cout << "Nilai parameter A sebelum increment: " << a << endl;
	a++;
	cout << "Nilai parameter A sesudah increment: " << a << endl;
}

int main(){
	int b = 5;
	cout << "Nilai B sebelum masuk fungsi: " << b << endl;
	Tambah1(b);
	cout << "Nilai B sesudah masuk fungsi: " << b << endl;
}
