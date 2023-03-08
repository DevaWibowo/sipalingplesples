#include <iostream>
using namespace std;

int main(){
	//buat variabel bertipe data int dengan isi 10
	int a = 10;
	//buat pointer dan tunjuk ke variabel a
	int *p = &a;
	int **p2 = &p;
	
	//Menampilkan nilai variabel a
	cout << "Nilai variabel A: " << a << endl;
	//Menampilkan alamat memori variabel A
	cout << "Alamat Memori Variabel A: " << &a << endl;
	//Menampilkan nilai variabel A melalui pointer
	cout << "Nilai variabel A melalui pointer: " << *p << endl;
	//Menampilkan apaya
	cout << "p: " << p << endl;
	//Menampilkan alamat pointer dari pointer p
	cout << "Alamat pointer p adalah: " << &p << endl;
	//Menampilkan nilai variabel A melalui pointer p2
	cout << "Nilai A: " << **p2 << endl;
	
}
