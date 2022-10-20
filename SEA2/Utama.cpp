#include "Karakter.cpp"
#include "Utama0.cpp"
#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <locale>
using namespace std;

void Tutorial();
void Command();
void PrologCommand();
void PrologTutorial();
void PilihanAwal();
void PreS0();
string GetInput();

Senjata Percobaan("Trial", 10, 1.0);
Karakter* Karina = new Karakter("Karina", 10, 10, 10, Percobaan);
Karakter* Roger = new Karakter("Roger", 20, 20, 20, Percobaan);
string c;


string GetInput(){
	getline(cin, c);
	std::transform(c.begin(), c.end(), c.begin(), ::tolower);
	return c;
}

void S(){
	cout << "'Huh. Baiklah, Aku sudah tahu semua pergerakan mu!!'" << endl;
	cout << "Kau akan bertarung melawan Camelion. Seekor Singa buas yang bisa berkamuflase, bersiaplah!" << endl;
	PreS0();
}

void PreS0(){
	cout << endl << "Masukkan s untuk menyerang." << endl;
	cout << "Masukkan t untuk mengakses tutorial." << endl;
	cout << "Pilihan: ";
	PilihanAwal();
}

void PilihanAwal(){
	GetInput();
	
	if(c == "s"){
		PrologCommand();
	}else if(c == "t"){
		PrologTutorial();
	}else{
		cout << endl;
		cout << "Hanya bisa memasukkan s atau t!!" << endl;
		cout << "Pilihan: ";
		PilihanAwal();
	}
}

void PrologCommand(){
	Command();
}


void Command(){
	cout << "SERANG!!";
}

void PrologTutorial(){
	Tutorial();
}

void Tutorial(){
	cout << "TUTORIAL";
}

int main(){
	Senjata Fav_Bow("Favonious Warbow", 50, 1.5);
	
	Karakter* Diona = new Karakter("Diona", 30, 50, 10, Fav_Bow);
	Diona->DisplayStat();
	
	Karakter* Fishcl("Fishcl", 30, 50, 10, Fav_Bow);
	Fishcl.DisplayStat();

//	Utama0();
//	S();
//	Karina->DisplayStat();
//	Roger->Serang(Karina);
//	Karina->DisplayStat();
//	string two = "S";
//	string one = "S";
//	std::transform(two.begin(), two.end(), two.begin(), ::tolower);
//	cout << two << endl;
//	cout << one;
	getch();
	return 0;
}
