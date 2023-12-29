#include <iostream>
using namespace std;

struct a {

};

int main() {
	const int Asize = 20;
	char name[Asize];
	char dessert[Asize];

	cout << "Enter your name:" << endl;
	cin >> name;
	cout << "Enter your favorite dessert:" << endl;
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << "for you, " << name << endl;
	return 0;
}