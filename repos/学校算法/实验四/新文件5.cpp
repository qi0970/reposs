#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ps;

void PSet(int n) {
	vector<vector<int>>ps1;
	vector<vector<int>>::iterator it;
	vector<int>s;
	ps.push_back(s);
	for (int i = 0; i <= n; i++) {
		ps1 = ps;
		for (it = ps1.begin(); it != ps1.end(); it++) {
			(*it).push_back(i);
		}
		for (it = ps1.begin(); it != ps1.end(); it++) {
			ps.push_back(*it);
		}
	}
}

void Knap(int w[], int v[], int W) {
	int count = 0;
	int sumw, sumv;
	int maxi, maxsumw = 0, maxsumv = 0;
	vector<vector<int>>::iterator it;
	vector<int>::iterator sit;
	cout << "���\tѡ����Ʒ\t������\t�ܼ�ֵ\t�ܷ�װ��" << endl;
	for (it = ps.begin(); it != ps.end(); it++) {
		cout << count + 1 << "\t";
		sumw = sumv = 0;
		cout << "{";
		for (sit = (*it).begin(); sit != (*it).end(); sit++) {
			cout << *sit ;
			sumw += w[*sit - 1];
			sumv += v[*sit - 1];
		}
		cout << "}\t\t" << sumw << "\t" << sumv;
		if (sumw <= W) {
			cout << " \t ��\n";
			if (sumv > maxsumv) {
				maxsumw = sumw;
				maxsumv = sumv;
				maxi = count;
			}
		} else
			cout << "\t ��\n";
		count++;
	}
	cout << "��ѷ���Ϊ:";
	cout << "ѡ����Ʒ";
	cout << "{";
	for (sit = ps[maxi].begin(); sit != ps[maxi].end(); sit++) {
		cout << *sit << " ";
	}
	cout << "}";
	cout << "������:" << maxsumw << ",�ܼ�ֵ:" << maxsumv << endl;
}

int main() {
	int n = 4, W = 6;
	int w[] = {5, 3, 2, 1};
	int v[] = {4, 4, 3, 1};
	PSet(n);
	cout << "0/1��������ⷽ��" << endl << n;
	Knap(w, v, W);
	return 0;
}
