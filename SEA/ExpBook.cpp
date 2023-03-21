#include "ExpBook.h"

ExpBook::ExpBook(int id, int amount) : ID(id), AmountExp(amount){
	
}
int ExpBook::GetExp(){
	return this->AmountExp;
}
int ExpBook::GetJumlah(){
	return this->Jumlah;
}
//void ExpBook::KurangJumlah(){
//	this->Jumlah--;
//}
void ExpBook::KurangJumlah(int jml){
	this->Jumlah -= jml;
}
void ExpBook::SetJumlah(int jml){
	this->Jumlah = jml;
}

ExpBook* WandererAdvice = new ExpBook(1, 50);
ExpBook* AdventurerExperience = new ExpBook(2, 5000);
ExpBook* HeroWit = new ExpBook(3, 20000);
