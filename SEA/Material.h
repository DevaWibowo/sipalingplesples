#pragma once
#include <string>
using namespace std;

class Material{
	private:
		int ID, Amount = 0;
		string Nama;
	public:
		Material(int id, string nama, int amount);
		void TambahAmount(int amount);
		void KurangAmount(int amount);
		int GetAmount();		
};
