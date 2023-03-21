#pragma once
#ifndef EXPBOOK_H
#define EXPBOOK_H

class ExpBook{
	private:
		int ID, AmountExp, Jumlah;
	public:
		ExpBook(int id, int amount);
		int GetExp();
		int GetJumlah();
		void SetJumlah(int jml);
//		void KurangJumlah();
		void KurangJumlah(int jml);
};

#endif
