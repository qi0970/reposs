#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> co = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7, 8};
	vector<int>::iterator it = co.begin();
	while (it != co.end()) {
		if (*it == 3) {

			it = co.erase(it);//·ÀÖ¹µü´úÆ÷Ê§Ð§
		} else {
			it++;
		}
	}
	cout << endl;
	cout << endl;
	for (it = co.begin(); it != co.end(); it++)
		cout << *it << " ";

}