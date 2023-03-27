#include "Karakter.cpp"
#include <vector>

//void CoutLevel(Karakter karakter[], int size){
//	for(int i = 0; i < size; i++){
//		cout << karakter[i].GetLevel << endl;
//	}
//}
void PrintLevel(Karakter *karakter[], int size){
	for(int i = 0; i < size; i++){
		cout << karakter[i]->GetHealthPoint() << endl;
	}
}
int main(){
	//Bagian 1: Penggunaan EXP BOOK
	Karakter *AratakiItto = new Karakter();
	WandererAdvice->SetJumlah(10);
	HeroWit->SetJumlah(5);
	
	
	//DATA AWAL (SEBELUM LEVEL UP)
	AratakiItto->CetakLv();
	AratakiItto->CetakExp();
	AratakiItto->CetakBatasExp();
	HeroWit->CetakJumlah();
	cout << endl;
	
//	AratakiItto->SetExp(100);
	AratakiItto->ConsumeExpBook(*HeroWit, 6);
	
	//DATA AKHIR (SESUDAH LEVEL UP)
	AratakiItto->CetakLv();
	AratakiItto->CetakExp();
	AratakiItto->CetakBatasExp();
	HeroWit->CetakJumlah();
	
	cout << endl;
	
//	AratakiItto->CetakBatasExp(vBatasExp);
//	vBatasExp.erase(vBatasExp.begin());
//	cout << endl;
//	AratakiItto->CetakBatasExp(vBatasExp);
//	cout << vBatasExp.front() << endl;
//	AratakiItto->LevelUp();
////	vBatasExp.erase(vBatasExp.begin());
//	cout << vBatasExp.front() << endl;
//	vector<int>::iterator it = vint.begin() + 1;
	
//	vector<int> vLevelChar = {0};
//vector<int> vBatasExp = { 0, 100, 250, 500, 1000 };
//	
//	int GainedExp = 150;
//	vLevelChar.back() += GainedExp;
//	cout << "EXP Karakter sekarang: " << vLevelChar.back() << endl;
//	int CurrentLevel = vLevelChar.size();
//	cout << "Level sebelum: " << CurrentLevel << endl;
//	if(vLevelChar.back() >= vBatasExp[CurrentLevel]){
//		cout << "Level UP!!" << endl;
//		vLevelChar.push_back();
//	}
//	
//	cout << "Level sesudah: " << CurrentLevel << endl;
//	cout << "Current EXP: " << vLevelChar.back() << endl;
	
	//Bagian 2: Vector dan Penambahan Stat
//	Karakter* AratakiItto = new Karakter();
//	Karakter* SangonomiyaKokomi = new Karakter();
//	Karakter* NaganoharaYoimiya = new Karakter();
//	Karakter* KujouSara = new Karakter;
//	AratakiItto->SetHealthPoint(100);
//	SangonomiyaKokomi->SetHealthPoint(100);
//	NaganoharaYoimiya->SetHealthPoint(100);
//	KujouSara->SetHealthPoint(100);
//	const int TEAMSIZE = 4;
//	Karakter *TEAM[TEAMSIZE] = { AratakiItto, SangonomiyaKokomi, NaganoharaYoimiya, KujouSara };
//	PrintLevel(TEAM, TEAMSIZE);
//	AratakiItto->HealTeam(TEAM, TEAMSIZE);
//	PrintLevel(TEAM, TEAMSIZE);
//	int array[TEAMSIZE] = { 1, 2, 3, 4 };
//	AratakiItto->PrintArray(array, TEAMSIZE);
//	string arraystring[TEAMSIZE] = { "Aku", "Dia", "Kamu", "Saya"};
//	AratakiItto->PrintArray(arraystring, TEAMSIZE);
//	cout << SangonomiyaKokomi->GetHealthPoint() << endl;
//	AratakiItto->HealTarget(SangonomiyaKokomi);
//	cout << SangonomiyaKokomi->GetHealthPoint() << endl;
	return 0;
}
