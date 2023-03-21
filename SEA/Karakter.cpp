#pragma once
#include "Karakter.h"
#include "Akun.cpp"

vector<int> vBatasExp = { 1000, 2325, 4025, 6175, 8800, 11950, 15675, 20025, 25025 };

void Karakter::CetakBatasExp(vector<int> vector){
	for(int i : vector){
		cout << i << endl;
	}
//	for(int i = 0; i < vector.size(); i++){
//		cout << vector[i] << endl;
//	}
}
void Karakter::TambahHealthPoint(double hp){
	this->HealthPoint += hp;
}
void Karakter::HealTarget(Karakter *karakter){
	double hp = this->GetHealthPoint() * 0.5;
	karakter->HealthPoint += hp;
}
void Karakter::SetNama(string nama){
	this->Nama = nama;
}
string Karakter::GetNama(){
	return this->Nama;
}
void Karakter::HealTeam(Karakter *karakter[], int size){
	double hp = this->GetHealthPoint() * 0.2;
	for(int i = 0; i < size; i++){
		karakter[i]->HealthPoint += hp;
	}
	cout << endl;
}
void Karakter::TambahAllHealthPoint(double hp){
	this->HealthPoint += hp;
}
void Karakter::TambahLevel(){
	this->Level++;
}
void Karakter::PrintArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}
void Karakter::PrintArray(string arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}
void Karakter::SetHealthPoint(double hp){
	this->HealthPoint = hp;
}
double Karakter::GetHealthPoint(){
	return this->HealthPoint;
}
Karakter::Karakter(){
	
}
void Karakter::SetLevel(int level){
	this->Level = level;
}
void Karakter::SetExp(int exp){
	this->Experience = exp;
}
void Karakter::ConsumeExpBook(ExpBook& buku, int amount){
	int JumlahBuku = buku.GetJumlah();
	int JumlahPakai = amount;
	int ExpBuku = buku.GetExp();
	int TotalExpBuku = ExpBuku * JumlahPakai;
	int Batas = this->BatasExp;
	int TotalExp = this->Experience + TotalExpBuku;
//	cout << "INIT EXP KARAKTER: " << this->GetExp() << endl;
//	cout << "TOTAL EXP BUKU DIKALI JUMLAH BUKU: " << TotalExpBuku << endl;
//	cout << "TOTAL EXP: " << TotalExp << endl;
//	cout << "BATAS EXP: " << this->GetBatasExp() << endl;
	if(JumlahBuku <= 0){
		cout << "Jumlah Buku EXP Tidak Mencukupi!!";
	}else{
		while(TotalExp >= Batas){
			this->Level++;
			TotalExp -= Batas;
			Batas =+ 20;
//			LevelUp();
		}
		cout << "BUKU EXP YANG TELAH DIGUNAKAN: " << JumlahPakai << endl;
		buku.KurangJumlah(JumlahPakai);
	}
	
	//cout << this->Experience;
//	if(this->Experience >= this->BatasExp){
//		int tampung = Experience - BatasExp;
//		this->Level++;
//		this->BatasExp += 50;
//		this->Experience -= this->BatasExp;
//	}

//	for(int i = this->Experience; i <= this->BatasExp; i - this->BatasExp){
//		cout << "Hi";
//	}
}
int Karakter::GetExp(){
	return this->Experience;
}
void Karakter::LevelUp(){
	while(this->Experience >= this->BatasExp){
		this->Level++;
		this->Experience -= this->BatasExp;
		if(this->Experience <= 0){
			this->Experience = 0;
		}
		//cout << this->GetExp() << endl;
		this->BatasExp += 20;
	}
}
int Karakter::GetBatasExp(){
	return this->BatasExp;
}
int const Karakter::GetLevel(){
	return this->Level;
}
void Karakter::LimitBreak(int level, Material tier1, Material tier2){
	string pesan = "Tidak bisa Limit Break!!";
	int lmd = Satu->GetLMD(), biaya = 50000;
	if(level != 50){
		cout << pesan << endl;
		cout << "Level tidak mencukupi" << endl;
	}else{
		if(lmd < biaya){
			cout << pesan << endl;
			cout << "LMD tidak mencukupi!!" << endl;
		}else{
			if(this->GetTier() == 2){
				cout << pesan << endl;
				cout << "Karakter sudah mencapai tingkatan tertinggi!!" << endl;
			}else{
				this->Tier++;
				this->Level = 0;
				Satu->SetLMD(lmd - biaya);
			}
		}
	}
	
}
int Karakter::GetTier(){
	return this->Tier;
//	int tier = this->Tier;
//	switch(tier){
//		case 0:
//			cout << "Tier 0" << endl;
//			break;
//		case 1:
//			cout << "Tier 1" << endl;
//			break;
//		case 2:
//			cout << "Tier 2" << endl;
//			break;
//	}
}
