#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> lit1(3, 5);
	list<int>::iterator it2 = {lit1.begin()};
	for (it2; it2 != lit1.end(); it2++) {
		cout << *it2 << " ";
	}

	return 0;
}
