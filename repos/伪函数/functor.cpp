#include <bits/stdc++.h>
using namespace std;

typedef int (*FUNC) (int, int);

class a {
	private:
		int func1(int x, int y) {
			cout << "func�ӷ���";
			return x + y;
		}
		int func2(int x, int y) {
			cout << "func������";
			return x - y;
		}
		int func3(int x, int y) {
			cout << "func�ɷ���";
			return x * y;
		}
		int func4(int x, int y) {
			cout << "func������";
			return x / y;
		}

	public:
		int x, y;
		int func(int x, int y, FUNC f) {
			return f(x, y);
		}
};


int main() {
	a i;
	FUNC f = &a::func3;
	cout << i.func(4, 5, func3);

}
