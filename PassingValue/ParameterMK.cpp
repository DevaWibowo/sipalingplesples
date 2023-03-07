#include <iostream>
using namespace std;

double Kali(double a, double b){
	return a * b;
};
void KaliVariabel(double a, double b, double &c){
	c = a * b;
};
void Increment(double &c){
	c++;
};

int main(){
	double Angka1, Angka2, Angka3;
	cout << "Masukkan Angka1: ";
	cin >> Angka1;
	cout << "Masukkan Angka2: ";
	cin >> Angka2;
	cout << "Masukkan Angka2: ";
	cin >> Angka3;
	
	cout << "Hasil Fungsi Kali: " << Kali(Angka1, Angka2) << endl;
	KaliVariabel(Angka1, Angka2, Angka3);
	cout << "Nilai Variabel Angka3 sekarang: " << Angka3 << endl;
	Increment(Angka3);
	cout << "Nilai Variabel Angka3 sekarang: " << Angka3 << endl;
}
