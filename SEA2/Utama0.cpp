#include <iostream>
using namespace std;

class Utama0{
	public:
	 void Display();
	 Utama0();
};

Utama0::Utama0(){
	cout << "Constructor";
}

void Utama0::Display(){
	cout << "Hello World";
}
