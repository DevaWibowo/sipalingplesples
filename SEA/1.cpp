#include <iostream>
#include <cstring>
using namespace std;

void Display();
void cek();

int main(){
	cout << "Kau siap?" << endl;
	cout << "(Ketik siap atau keluar)" << endl;
	cek();
	
	//Display();
}

void cek(){
	string n = "";
	cin >> n;
	if(n == "siap"){
			cout << "Baiklah," << endl;
		}else if(n == "keluar"){
			cout << "Okelah," << endl;
		}else{
			cout << "Ketikannya mohon diperhatikan" << endl;
			cout << "Cefat: ";
			cek();
		}
}

void Display(){
	cout << "Display dari fungsi";
}
