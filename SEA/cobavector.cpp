#include "Karakter.cpp"
#include <vector>

void CetakVector(vector<int> vector){
	for(int i = 0; i < vector.size(); i++){
		cout << vector[i] << ' ';
	}
	cout << endl;
}

int main(){
	vector<int> vint;
	//Menambahkan elemen ke dalam vector
	vint.push_back(10);
	vint.push_back(12);
	vint.push_back(14);
	//Mengetahui ukuran vector
	cout << "Ukuran Vector: " << vint.size() << endl;
	//Cout semua isi vector
	CetakVector(vint);
	//Menghapus vector elemen tertentu
	vector<int>::iterator it = vint.begin() + 1;
	vint.erase(it);
	CetakVector(vint);
	//Menukar value 2 vector
	vector<int>::iterator itswA = vint.begin();
	vector<int>::iterator itswB = vint.begin() + 1;
	swap(*itswA, *itswB);
	CetakVector(vint);
	//Menghapus indeks terakhir sebuah vector
	vint.pop_back();
	CetakVector(vint);
	//Menghapus seluruh isi vector
	vint.clear();
	CetakVector(vint);
	return 0;
}
