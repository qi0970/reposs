#include <iostream>
using namespace std;


int length(const char *c) {

	if (*c != '\0') {//�����س��ͽ����ж�

		return length(c + 1) + 1;

	} else
		return 0;
}

int main() {
	char a[100] ;
	cout << "�����룺";
	cin >> a;
	cout << length(a);

	return 0;
}
