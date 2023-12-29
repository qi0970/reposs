#include <iostream>
using namespace std;

int cif(int x, int n) {
	if (n == 1) {
		return x;
	} else {
		return x * cif(x, n - 1);
	}

}

double myPow(double x, int n) {
	if (n == 0) {
		return 1.0; // ��nΪ0ʱֵ��Ϊ1
	}
	if (n < 0) {
		x = 1 / x; // ��nΪ����ʱ����x��-n�η��ȼ�����1/x��n�η�
		n = -n; // ��nת��Ϊ����
	}
	double half = myPow(x, n / 2); // �ݹ����x��n/2�η�
	if (n % 2 == 0) {
		return half * half; // ��nΪż��ʱ��x��n�η�����x��n/2�η�*x��n/2�η�
	} else {
		return half * half * x; // ��nΪ����ʱ��x��n�η�����x��n/2�η�*x��n/2�η�*x
	}
}

int main() {
	int x, x1, n, res;
	cout << "����x��";
	cin >> x;
	cout << "����η�:";
	cin >> n;
	cout << "����1 ʹ�õݹ鷽����" << endl << "����2 ʹ�ö��ַ���" << endl;
	cin >> x1;
	if (x == 1) {
		res = cif(x, n);
	} else if (x == 2)
		res = myPow(x, n);
	cout << res;

	return 0;
}
