#ifndef SENJATA_H
#define SENJATA_H

#include <iostream>
using namespace std;

class Senjata{
	private:
		double Attack;
		string Nama;
		
	public:
		//Constructor
		Senjata(string nama, double attack, double substat);
		
		//Method Setter
		void SetNama(string nama);
		void SetAttack(double attack);
		
		//Method Getter
		double GetAttack();
};

Senjata::Senjata(string nama, double attack, double substat){
	Nama = nama;
	Attack = attack * substat;
}

void Senjata::SetNama(string nama){
	Nama = nama;
}

void Senjata::SetAttack(double attack){
	Attack = attack;
}

double Senjata::GetAttack(){
	return Attack;
}

#endif
