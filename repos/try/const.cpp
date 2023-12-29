#include <bits/stdc++.h>
using namespace std;
#

class a {
	public:
		int a;
		char b;
		short c;
};

int main() {
	a ai;
	ai.a = 1;
	ai.b = 'a';
	ai.c = 3;
	cout << &ai.a << " 2" << &ai.b << " 3" << &ai.c  << endl;
	cout << sizeof(a);
	return 0;
}
