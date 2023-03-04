#include <iostream>
using namespace std;

void nonstatis(){
	static int a {0};
	a++;
	cout << a << endl;
}

int main(){
	nonstatis();
	nonstatis();
	nonstatis();
}
