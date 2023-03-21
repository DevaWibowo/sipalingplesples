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
		void CetakBatasExp(vector<int> vector);
		void SetNama(string nama);
		string GetNama();
		void SetHealthPoint(double hp);
		double GetHealthPoint();
		void HealTeam(Karakter *karakter[], int size);
		void PrintArray(int arr[], int size);
		void PrintArray(string arr[], int size);
		
		Karakter();
		void SetLevel(int level);
		void TambahLevel(int level);
		void TambahLevel();
		void TambahHealthPoint(double hp);
		void TambahAllHealthPoint(double hp);
		void ConsumeExpBook(ExpBook& buku, int amount);
		void LevelUp();
		void SetExp(int exp);
		int GetExp();
		int GetBatasExp();
		int const GetLevel();
		int GetTier();
		void LimitBreak(int level, Material tier1, Material tier2);
	
		void HealTarget(Karakter *karakter);
};

#endif

