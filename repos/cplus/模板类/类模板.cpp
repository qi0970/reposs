#include <iostream>
using namespace std;
template<class T>

class A {
	public:
		A(T t = 0) {
			this->t = t;
		}
		T &Tget() {
			return t;
		}
	private:
		T t;
};

void PrinA(A<int> &a) {
	cout << a.Tget() << endl;
}

int main() {
	A<int> a = 666;
	cout << a.Tget() << endl;
	PrinA(a);

	return 0;
}
