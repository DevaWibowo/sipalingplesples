#include "Karakter.cpp"
#include <vector>

void CetakNama(vector<Karakter> karakter){
	for(int i = 0; i < karakter.size(); i++){
		cout << karakter[i].GetNama() << endl;
	}
}
void SwapChar(vector<Karakter> karakter, int awal, int akhir){
	vector<Karakter>::iterator a = karakter.begin() + awal;
	vector<Karakter>::iterator b = karakter.begin() + akhir;
}

int main(){
	Karakter AratakiItto, KamisatoAyaka, SangonomiyaKokomi, Gorou;
	AratakiItto.SetNama("Arataki Itto");
	KamisatoAyaka.SetNama("Kamisato Ayaka");
	SangonomiyaKokomi.SetNama("Sangonomiya Kokomi");
	Gorou.SetNama("Gorou");
	
	vector<Karakter> vChar;
	vChar.push_back(AratakiItto);
	vChar.push_back(KamisatoAyaka);
	vChar.push_back(SangonomiyaKokomi);
	vChar.push_back(Gorou);
	CetakNama(vChar);
	cout << endl;
	
//	Karakter tempDep = vChar.front();
//	Karakter tempBel = vChar.back();
	Karakter tempDep = vChar.at(0);
	Karakter tempBel = vChar.back();
	vChar.front() = tempBel;
	vChar.back() = tempDep;
	CetakNama(vChar);
	
	//Semisal tukar Sangonomiya kokomi dengan ittu
//	vector<Karakter>::iterator iAra = vChar.begin();
//	vector<Karakter>::iterator iGor = vChar.begin() + 3;
//	vChar.swap(*iAra, *iGor);
//	CetakNama(vChar);
	return 0;
}
