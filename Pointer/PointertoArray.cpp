#include <iostream>
using namespace std;

void CetakArray(int *p, int n){
	for(int i = 0; i < n; i++){
		cout << p[i] << ' ';
	}
}

int main(){
	//Inisialisasi Array
	int data[5] = {1, 2, 3, 4, 5};
	//Pembuatan pointer bertipe int
	int *p;
	//pointer menunjuk array
	p = data;
	
//	for(int i = 0; i < 5; i++){
//		cout << "p[" << i << "] = " << p[i]  << endl;
//	}

//	CetakArray(data, 7);

	//Pointer menunjuk elemen pertama dalam array
	cout << "Elemen Pertama Pointer: " << *p << endl;
	
	//Menambah pointer untuk menunjuk elemen kedua/selanjutnya
	p++;
	cout << "Elemen Kedua Pointer: " << *p << endl;
	//Pointer menunjuk ke elemen 2+2
	p += 2;
	cout << "Elemen Keempat Pointer: " << *p << endl;
	//Pointer menunjuk elemen ketiga
	p--;
	cout << "Elemen ketiga Pointer: " << *p << endl;
	
	//Contoh lain penggunaan penambahan dan atau pengurangan pointer
	//membuat array dengan tipe data char dan berisikan 4 elemen
	char datac[4] = {'A', 'K', 'U', '\0'};
	//membuat pointer bertipe char
	char *p_data;
	p_data = datac;
	
	while(*p_data){
		cout << *p_data;
		p_data++;
	}
}
