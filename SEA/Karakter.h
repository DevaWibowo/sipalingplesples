#pragma once
#ifndef KARAKTER_H
#define KARAKTER_H
#include <iostream>
#include <string>
#include <vector>
#include "ExpBook.cpp"
#include "Material.cpp"
using namespace std;

class Karakter{
	private:
		int Level=1, Experience=0, BatasExp=50, Tier=0;
		double HealthPoint;
		string Nama;
		
	public:
		// CONSTRUCTOR
		Karakter();
		
		// METHOD SETTER
		void SetNama(string nama);
		void SetExp(int exp);
		void SetLevel(int level);
		void SetHealthPoint(double hp);
		
		// METHOD GETTER
		string GetNama();
		double GetHealthPoint();
		int GetBatasExpV();
		int GetExp();
		int GetBatasExp();
		int const GetLevel();
		int GetTier();
		
		// METHOD TAMBAH PROPERTI
		void TambahLevel(int level);
		void TambahLevel();
		void TambahHealthPoint(double hp);
		void TambahAllHealthPoint(double hp);
		
		// METHOD GROWTH
		void ConsumeExpBook(ExpBook& buku, int amount);
		void LevelUp();
		void LimitBreak(int level, Material tier1, Material tier2);
		
		// METHOD VOID / LAINNYA
		
		// METHOD SKILL
		void HealTeam(Karakter *karakter[], int size);
		void HealTarget(Karakter *karakter);
		
		// METHOD CETAK
		void CetakBatasExp(vector<int> vector);
		void CetakExp();
		void CetakLv();
		void CetakHP();
		void CetakTier();
		void CetakNama();
		void CetakBatasExp();
		void Display();
		
		// METHOD CETAK VECTOR
		void PrintArray(int arr[], int size);
		void PrintArray(string arr[], int size);
};

#endif

