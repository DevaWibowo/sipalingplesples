#include "p_extern.cpp"

int main(){
	extern int a;
	extern int b;
	
	cout << a << endl; //output 10
	cout << b << endl; //output 20
}
