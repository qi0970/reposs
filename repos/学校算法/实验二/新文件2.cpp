#include <iostream>
using namespace std;


int length(const char *c) {

	if (*c != '\0') {//遇到回车就结束判断

		return length(c + 1) + 1;

	} else
		return 0;
}

int main() {
	char a[100] ;
	cout << "请输入：";
	cin >> a;
	cout << length(a);

	return 0;
}
