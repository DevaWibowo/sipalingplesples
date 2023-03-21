#include <iostream>
#include <vector>
using namespace std;

//void CetakArray();
void heal(vector<string>& team, const string& member){
	cout << "Mengobati: " << member << endl;
}

int main(){
//	int HP = 1, *pHP;
//	pHP = &HP;
//	//cout value dari variabel yang ditunjuk oleh pointer
//	cout << "Value variable: " << *pHP << endl;
//	//cout alamat dari variable yang ditunjuk oleh pointer
//	cout << "Alamat variable: " << pHP << endl;
//	
//	//penambahan nilai array
//	const int SIZE = 5;
//	int arr[SIZE] = {1, 2, 3, 4, 5};
//	int tambahnilai = 2;
//	//nilai array sebelum ditambah
//	for(int i = 0; i < SIZE; i++){
//		cout << arr[i] << ' ';
//	}
//	//penambahan nilai array
//	for(int i = 0; i < SIZE; i++){
//		arr[i] += tambahnilai;
//	}
//	cout << "\n";
//	//nilai array sesudah ditambah
//	for(int i = 0; i < SIZE; i++){
//		cout << arr[i] << ' ';
//	}
	vector<string> teamlist = { "Arataki Itto", "Kamisato Ayaka", "Naganohara Yoimiya", "Sangonomiya Kokomi" };
	for(string& member : teamlist){
		heal(teamlist, member);
	}
	
	return 0;
}

//void CetakArray(){
//	for(int i = 0; i < SIZE; i++){
//		cout << arr[i] << endl;
//	}
//}
