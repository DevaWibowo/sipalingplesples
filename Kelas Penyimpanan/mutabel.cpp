#include <iostream>
using namespace std;

class mutabel{
	public:
		mutable double a;
		double b;
		mutabel(double a, double b){
			this->a = a;
			this->b = b;
		}
};

int main(){
	const mutabel objek = mutabel(10, 10);
	cout << objek.a << endl;
	cout << objek.b << "\n\n";
	
	objek.a = 100;
	objek.b = 100;
	
	cout << objek.a << endl;
	cout << objek.b << endl;
}
