#include "Senjata.h"

#ifndef KARAKTER_H
#define KARAKTER_H

using namespace std;

class Karakter{
	private:
		string Nama;
		double Health, Attack, Defense;
		
	public:
		//Constructor
		Karakter(string nama, double health, double attack, double defense, Senjata senjata);
				
		//Method Setter
		void SetNama(string nama);
		void SetHealth(double health);
		void SetAttack(double attack);
		void SetDefense(double defense);
		
		//Method Lain-lain
		void DisplayStat();
		
		//Method Getter
		string GetNama();
		double GetHealth();
		double GetAttack();
		double GetDefense();
		
		//Method Command
		void Serang(Karakter *karakter);
		void Heal();
};

#endif
