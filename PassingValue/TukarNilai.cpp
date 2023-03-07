#include <iostream>
using namespace std;

void TukarNilai(int &a, int &b){
	int temp = a; //variabel temp berisi nilai a
	a = b; //variabel a berisi nilai b;
	b = temp; //variabel b berisi nilai temp / a terdahulu
}

int main(){
	int Angka1, Angka2;
	
	cout << "Masukkan bilangan 1: ";
	cin >> Angka1;
	
	cout << "Masukkan bilangan 2: ";
	cin >> Angka2;
	
	cout << "Nilai sebelum ditukar: Angka1;" << Angka1 << " , Angka2;" << Angka2 << endl;
	TukarNilai(Angka1, Angka2);
	cout << "Nilai sesudah ditukar: Angka1;" << Angka1 << ", Angka2;" << Angka2 << endl;
}
