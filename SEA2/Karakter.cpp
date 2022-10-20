#include <iostream>
#include <conio.h>
#include "Karakter.h"
#include "Senjata.h"

using namespace std;

Karakter::Karakter(string nama, double health, double attack, double defense, Senjata senjata){
	Nama = nama;
	Health = health;
	Attack = attack + senjata.GetAttack();
	Defense = defense;
}



void Karakter::SetNama(string nama){
	Nama = nama;
}

void Karakter::SetHealth(double health){
	Health = health;
}

void Karakter::SetAttack(double attack){
	Attack = attack;
}

void Karakter::SetDefense(double defense){
	Defense = defense;
}

string Karakter::GetNama(){
	return Nama;
}

double Karakter::GetHealth(){
	return Health;
}

double Karakter::GetAttack(){
	return Attack;
}

double Karakter::GetDefense(){
	return Defense;
}

void Karakter::DisplayStat(){
	cout << "=========" << endl;
	cout << "Nama   : " << GetNama() << endl;
	cout << "Health : " << GetHealth() << endl;
	cout << "Attack : " << GetAttack() << endl;
	cout << "Defense: " << GetDefense() << endl;
	cout << endl;
}

void Karakter::Serang(Karakter *karakter){
	karakter->Health -= karakter->Attack;
}

void Karakter::Heal(){
	Health += Attack * 0.2;
}
